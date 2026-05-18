
void FUN_ram_4207e956(void)

{
  int iVar1;
  
  iVar1 = *(int *)(gp + -0xb4);
  (*(code *)&SUB_ram_40010488)(iVar1 + 0x368,0,0x24);
  (*(code *)&SUB_ram_400106a8)
            (iVar1 + 0x36c,&DAT_ram_3c0c46d4,DAT_ram_3fcc41cb,DAT_ram_3fcc41cc,DAT_ram_3fcc41cd);
  *(undefined4 *)(*(int *)(gp + -0xb4) + 0x368) = 10;
  return;
}

