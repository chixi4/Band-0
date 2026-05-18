
int FUN_ram_4202d538(int param_1,undefined4 param_2,uint param_3,undefined2 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x10);
    if (param_3 < *(ushort *)(param_1 + 0x10)) {
      uVar3 = param_3;
    }
    iVar1 = (*(code *)&SUB_ram_400119f4)(param_1,0,uVar3 & 0xffff,param_2);
    iVar2 = 0x11;
    if ((iVar1 == 0) &&
       (iVar2 = (uint)(param_3 < *(ushort *)(param_1 + 0x10)) << 2, param_4 != (undefined2 *)0x0)) {
      *param_4 = (short)uVar3;
    }
    return iVar2;
  }
  return 3;
}

