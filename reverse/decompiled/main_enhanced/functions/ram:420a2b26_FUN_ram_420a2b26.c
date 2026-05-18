
/* WARNING: Removing unreachable block (ram,0x420a2bd2) */

undefined4 FUN_ram_420a2b26(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if ((((param_4 == 0) || (param_5 == 0)) || (param_1 == 0)) || (param_2 < 0)) {
LAB_ram_420a2b44:
    uVar1 = 0xffffffff;
  }
  else {
    uVar4 = thunk_FUN_ram_403919ae();
    do {
      do {
        iVar2 = FUN_ram_420a28a0(param_1,param_2,param_3,param_4,param_5);
        if (iVar2 == 1) {
          return 1;
        }
        if (iVar2 == -1) goto LAB_ram_420a2b44;
      } while ((iVar2 != 0) || (*(int *)(param_4 + 0x30) < 0));
      uVar5 = thunk_FUN_ram_403919ae();
      iVar2 = *(int *)(param_4 + 0x30);
      uVar3 = (uint)uVar5 - (int)uVar4;
      uVar6 = (*(code *)&SUB_ram_400109f0)
                        (uVar3,((int)((ulonglong)uVar5 >> 0x20) - (int)((ulonglong)uVar4 >> 0x20)) -
                               (uint)((uint)uVar5 < uVar3),1000,0);
    } while (uVar6 < (ulonglong)(longlong)iVar2);
    FUN_ram_420a2c28(*(undefined4 *)(param_5 + 0x790),4,0x8006);
    uVar1 = 0;
  }
  return uVar1;
}

