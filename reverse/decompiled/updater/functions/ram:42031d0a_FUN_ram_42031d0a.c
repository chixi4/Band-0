
void FUN_ram_42031d0a(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = (*(code *)&SUB_ram_40011fdc)(param_1 + -0x12,1,param_2 + 0x12);
  if (iVar1 != 0) {
    puVar2 = *(uint **)(iVar1 + 4);
    puVar2[1] = puVar2[1] + 0x12;
    *(short *)(iVar1 + 0x16) = *(short *)(iVar1 + 0x16) + -0x12;
    *puVar2 = (*puVar2 & 0xfff) - 0x12 & 0xfff | *puVar2 & 0xfffff000;
  }
  return;
}

