
int FUN_ram_4206616e(undefined4 param_1,undefined1 param_2,int param_3,int param_4,int *param_5,
                    undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_5 = param_4 + 4;
  iVar2 = thunk_FUN_ram_4039047a(param_4 + 0x12);
  iVar1 = iVar2;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0xe) = 1;
    *(undefined1 *)(iVar2 + 0xf) = param_2;
    *(ushort *)(iVar2 + 0x10) = (ushort)(param_4 << 8) | (ushort)((uint)param_4 >> 8);
    iVar1 = iVar2 + 0xe;
    if (param_3 == 0) {
      uVar3 = (*(code *)&SUB_ram_40010488)(iVar2 + 0x12,0);
    }
    else {
      uVar3 = FUN_ram_40399daa(iVar2 + 0x12,param_3);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = uVar3;
    }
  }
  return iVar1;
}

