
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207f742(uint param_1,byte *param_2,char param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  if ((*param_2 & 1) == 0) {
    if ((param_1 & 0xfffffffb) != 1) {
      uVar1 = FUN_ram_4207f3aa(param_2);
      goto LAB_ram_4207f774;
    }
    uVar1 = (uint)(byte)(param_3 + 8);
  }
  else {
    uVar1 = (uint)(byte)(param_3 + 1);
    FUN_ram_4207f360(param_2,uVar1);
LAB_ram_4207f774:
    if (param_1 == 0) {
      thunk_EXT_FUN_ram_40011e74(uVar1);
      iVar5 = (uVar1 + 0x4c) * 4;
      if (*(int *)(&DAT_ram_3fcc4008 + iVar5) != 0) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
        *(undefined4 *)(&DAT_ram_3fcc4008 + iVar5) = 0;
      }
      FUN_ram_4209243a(1);
      return 0;
    }
  }
  if (param_1 == 2) {
    FUN_ram_4039c11e(auStack_40,param_4,0x10);
    FUN_ram_4039c11e(auStack_30,param_4 + 0x18,8);
    puVar2 = auStack_28;
    iVar5 = param_4 + 0x10;
    uVar4 = 8;
  }
  else {
    puVar2 = auStack_40;
    iVar5 = param_4;
    uVar4 = param_5;
  }
  FUN_ram_4039c11e(puVar2,iVar5,uVar4);
  iVar5 = FUN_ram_4207f3c6(1,param_2);
  FUN_ram_42092450(1,param_1 & 0xff,param_3,param_2,uVar1,auStack_40,param_5 & 0xff,1,iVar5 != 0);
  FUN_ram_420935b6();
  puVar3 = (undefined2 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(param_5 + 0xa8);
  if (puVar3 == (undefined2 *)0x0) {
    return 0x101;
  }
  FUN_ram_4207f712();
  if (param_1 == 2) {
    *(int *)(puVar3 + 0x50) = gp + 0x1c0;
    *(undefined4 *)(puVar3 + 0x4c) = 1;
    *(undefined4 *)(puVar3 + 0x4e) = 0;
  }
  else {
    if (param_1 == 3) {
      iVar5 = gp + 0x60;
    }
    else {
      if ((param_1 & 0xfffffffb) != 1) goto LAB_ram_4207f864;
      iVar5 = gp + 0x1e8;
    }
    *(int *)(puVar3 + 0x50) = iVar5;
  }
LAB_ram_4207f864:
  *puVar3 = (short)uVar1;
  *(uint *)(puVar3 + 0x52) = param_5;
  FUN_ram_4039c11e(puVar3 + 0x54,param_4,param_5);
  FUN_ram_4207f2e2(uVar1,puVar3);
  return 0;
}

