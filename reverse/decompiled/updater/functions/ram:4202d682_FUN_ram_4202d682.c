
int FUN_ram_4202d682(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((param_2 == 0 && param_3 == 0) || (iVar1 = -0x4080, param_4 != 0)) {
    uVar5 = *(undefined4 *)(param_1 + 4);
    iVar1 = -0x10;
    iVar2 = FUN_ram_4202939a(1,uVar5);
    if (iVar2 != 0) {
      iVar3 = FUN_ram_4202939a(1,uVar5);
      if (iVar3 != 0) {
        iVar4 = FUN_ram_4202c01a(param_2,param_3,param_4,uVar5,iVar3);
        iVar1 = -0x4080;
        if (((iVar4 == 0) && (iVar1 = FUN_ram_4202c80e(param_1,param_5,iVar2), iVar1 == 0)) &&
           (iVar4 = FUN_ram_42027c12(iVar2,iVar3,uVar5), iVar1 = 0, iVar4 != 0)) {
          iVar1 = -0x4380;
        }
      }
      FUN_ram_420293c8(iVar2,uVar5);
      if (iVar3 != 0) {
        FUN_ram_420293c8(iVar3,uVar5);
      }
    }
  }
  return iVar1;
}

