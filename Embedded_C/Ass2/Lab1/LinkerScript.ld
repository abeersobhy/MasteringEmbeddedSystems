ENTRY(Reset)

MEMORY
{
	Mem (rwx): o = 0x00000000, l = 64M
}

SECTIONS
{
	.startup :
	{
		StartUp.o(.text)
	}>Mem
	.text :
	{
		*(.text)
	}>Mem
	.data :
	{
		*(.data)
	}>Mem
	.bss :
	{
		*(.bss)
	}>Mem
	. = . + 0x10000;
	stack_top = .;
}