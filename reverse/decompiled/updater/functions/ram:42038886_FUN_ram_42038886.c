
void FUN_ram_42038886(void)

{
  int iVar1;
  
  iVar1 = *(int *)(gp + -0x2b8);
  (*(code *)&SUB_ram_40010488)(iVar1 + 0x368,0,0x24);
  (*(code *)&SUB_ram_400106a8)
            (iVar1 + 0x36c,0x3c072b80,DAT_ram_3fcb513b,DAT_ram_3fcb513c,DAT_ram_3fcb513d);
  *(undefined4 *)(*(int *)(gp + -0x2b8) + 0x368) = 10;
  return;
}

