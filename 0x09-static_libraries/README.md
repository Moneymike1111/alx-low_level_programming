A static library (.a or .lib file) is a collection of pre-compiled object files (.o files) containing reusable functions, variables, and data. When you link your program with a static library, the entire code you need from the library is copied directly into your executable, making it self-contained.





ar cr: Creates an archive.
ar r: Adds files to an existing archive.
ar d: Deletes files from an archive.
ar t: Lists contents of an archive.
ranlib: Generates an index file for efficient symbol lookup within the archive.
nm: Prints symbol information from object files or archives:
nm -p: Prints detailed symbol information.
