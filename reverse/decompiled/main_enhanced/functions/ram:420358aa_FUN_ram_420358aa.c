
void FUN_ram_420358aa(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  FUN_ram_4203507a(param_1,(int)(char)((param_3 + 3) / 4));
  for (iVar3 = 0; iVar3 < param_3; iVar3 = (iVar3 + 1) * 0x1000000 >> 0x18) {
    uVar2 = (param_3 + -1) - iVar3;
    puVar1 = (uint *)((uVar2 & 0xfffffffc) + param_1);
    *puVar1 = *puVar1 | (uint)*(byte *)(param_2 + iVar3) << ((uVar2 & 3) << 3);
  }
  return;
}

