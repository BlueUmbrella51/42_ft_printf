NAME = libftprintf.a
CC = gcc
IFLAGS= -Wall -Wextra -Werror -g
RAW_FILES=ft_vdprintf ft_parse_format ft_is_of_type ft_create_argument \
ft_add_arg_parts ft_pf_lst ft_adj_flags_precision \
ft_get_size_of_datatype ft_set_data ft_set_data_type ft_set_def_prec \
ft_if_is_period set_define_data_1 set_define_data_2 set_define_data_3 \
ft_range_check dispatcher ft_handle_di ft_handle_o \
ft_oucx ft_di ft_get_working_data ft_calculate_length ft_create_arguments \
ft_conversion_type ft_handle_u ft_handle_x ft_calculate_length_u \
ft_handle_b ft_handle_p ft_handle_c ft_handle_wint ft_handle_f \
ft_handle_e ft_handle_s ft_handle_empty ft_strnull \
ft_handle_g ft_writeout ft_vsnprintf ft_vfprintf ft_vasprintf \
ft_write_output ft_vsprintf ft_get_result ft_lm
SRC_FILES=$(addprefix srcs/,$(addsuffix .c,$(RAW_FILES)))
OBJ_FILES=$(patsubst srcs/%.c,obj/%.o,$(SRC_FILES))
HEADER=includes/libftprintf.h
LIBFT_RAW=ft_putchar ft_putstr ft_error ft_memset ft_bzero ft_strlen \
ft_isupper ft_islower ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
ft_toupper ft_tolower ft_isspace ft_atoi ft_strcpy ft_strncpy ft_strcmp \
ft_strncmp ft_strcat ft_strstr ft_memcpy ft_strchr ft_strrchr ft_strnstr \
ft_memalloc ft_strnew ft_strclr ft_striter ft_striteri ft_memdel ft_strdel \
ft_strdup ft_strlcat ft_strnlen ft_memccpy ft_memmove ft_memchr ft_memcmp \
ft_strncat ft_strmap ft_strmapi ft_strequ ft_strnequ ft_strjoin ft_strsub \
ft_strtrim ft_strsplit ft_itoa ft_putendl ft_putnbr ft_putchar_fd \
ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew ft_lstdelone ft_lstdel \
ft_lstaddend ft_lstadd ft_lstiter ft_lstmap ft_mempcpy ft_itoabase \
ft_swap ft_sqrt ft_rot ft_rotr ft_atoibase ft_pow ft_strtolower ft_lstpop \
ft_lstpopend ft_lstlen ft_strtoupper ft_memrealloc ft_lstremove ft_lstsearch \
ft_strplen ft_strtrunc ft_strndup ft_memdup ft_memplen ftd_memalloc \
ft_memtrunc ft_lsteremove ft_lsttoarr ft_lstedel get_next_line
LIBFT_SRC=$(addsuffix .c,$(addprefix libft/,$(LIBFT_RAW)))
LIBFT_OBJ=$(patsubst libft/%.c,libft/%.o,$(LIBFT_SRC))
LIBFT_HEADER=libft/libft.h libft/get_next_line.h
FLOATS_RAW=ft_frexp ft_get_string float_utilities ft_create_bigint \
ft_mult_bigint ft_div_bigint ft_round_bigint ft_create_string ft_fill_str \
ft_scale_bigint ft_create_string_e ft_get_len_zero_excep ft_zero_str \
ft_fill_string_e ft_string_exceptions ft_conv_g ft_round_e ft_shift_left \
ft_create_output ft_get_length ft_get_max_index
FLOATS_SRC=$(addsuffix .c,$(addprefix floats/,$(FLOATS_RAW)))
FLOATS_OBJ=$(patsubst floats/%.c,floats/%.o,$(FLOATS_SRC))
FLOATS_HEADER=floats/includes/floats.h

all: $(NAME)

$(NAME): $(OBJ_FILES) libft/libft.a floats/libfloats.a
	ar -rcT $@ $^

libft/libft.a: $(LIBFT_OBJ)
	$(MAKE) -C libft

$(LIBFT_OBJ): $(LIBFT_HEADER)

floats/libfloats.a: $(FLOATS_OBJ)
	$(MAKE) -C floats

$(FLOATS_OBJ): $(FLOATS_HEADER)

obj:
	mkdir -p $@

obj/%.o: srcs/%.c $(HEADER) | obj
	$(CC) $(IFLAGS) -o $@ -c $<

clean_obj: obj
	rm -f obj/*.o

clean: clean_obj
	make clean -C libft
	make clean -C floats
	rm -f includes/libftprintf.h.gch

fclean: clean
	make fclean -C libft
	make fclean -C floats
	rm -f $(NAME)

re: fclean all
