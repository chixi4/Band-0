
void FUN_ram_4203587a(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < param_2; iVar2 = (iVar2 + 1) * 0x1000000 >> 0x18) {
    uVar1 = (param_2 + -1) - iVar2;
    *(char *)(param_1 + iVar2) =
         (char)(*(uint *)((uVar1 & 0xfffffffc) + param_3) >> ((uVar1 & 3) << 3));
  }
  return;
}

