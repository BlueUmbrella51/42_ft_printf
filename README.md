# 42_ft_printf

This assignment was done as part of the curriculum at Codam (part of the 42 network of coding schools) and had to meet the
following requirements:

• You have to recode thelibc’s printf function.
• Your function will be called ft_printfand will be prototyped similarly to printf.
• You won’t do the buffer management in the printf function.
• You have to manage the following conversions: csp
• You have to manage the following conversions: diouxX with the following flags: hh, h,l and ll.
• You have to manage the following conversion: f with the following flags: l and L.
• You must manage %%
• You must manage the flags #0-+ and space
• You must manage the minimum field-width
• You must manage the precision

As a bonus I also implemented the following:

• Added vasprintf, vdprintf, vfprintf, vsnprintf, and vsprintf
• Extended the precision and handling of floats beyond the scope of the assignment
• Implementation can also handle e and g conversions
• Added a %b conversion to print integers in binary format

No existing functions could be used during this project, except for:
• write
• malloc
• free
• exit
