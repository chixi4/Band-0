
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ae030(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                     undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                     int param_10,int param_11,char param_12)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  short sVar4;
  int iVar5;
  undefined1 uStack_45;
  short sStack_44;
  undefined2 auStack_42 [7];
  
  iVar1 = 0;
  do {
    iVar2 = FUN_ram_420ad97c(param_2,param_1);
    iVar5 = ((*(char *)(param_3 + iVar1) - param_4) + param_5) * 0x10000 >> 0x10;
    (**(code **)(_DAT_ram_3fcc4c78 + 0x1d0))
              (iVar5,&uStack_45,auStack_42,&sStack_44,param_6,param_7,param_8,0x12);
    puVar3 = (undefined2 *)(iVar1 * 2 + param_10);
    *puVar3 = auStack_42[0];
    iVar2 = sStack_44 - iVar2;
    sVar4 = (short)iVar2;
    *(undefined1 *)(param_11 + iVar1) = uStack_45;
    if (0x18 < iVar2 * 0x10000 >> 0x10) {
      sVar4 = 0x18;
    }
    if (sVar4 < -0x50) {
      sVar4 = -0x50;
    }
    *(char *)(param_9 + iVar1) = (char)sVar4;
    if (param_12 != '\0') {
      FUN_ram_420af7f6(0x3fcb85a0,iVar1,*(undefined1 *)(param_11 + iVar1),*puVar3,(int)sVar4,
                       (int)sStack_44,(int)*(char *)(param_3 + iVar1),iVar5);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  return;
}

