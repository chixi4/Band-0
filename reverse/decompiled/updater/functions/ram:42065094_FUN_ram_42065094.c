
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42065094(int param_1,int param_2,int param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [44];
  
  FUN_ram_4206587c(_DAT_ram_3fcb632c);
  _DAT_ram_3fcb632c = 0;
  iVar2 = FUN_ram_40399d1a(1,0x24);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if ((((param_1 == 0) || (param_2 == 0)) ||
      (iVar3 = FUN_ram_42061f02(param_1,param_2 + 2,iVar2), iVar3 == 0)) &&
     ((param_3 != 0 || (*(int *)(iVar2 + 0x14) != 0)))) {
    if (((_DAT_ram_3fcb61bc != 0) &&
        ((*(int *)(iVar2 + 0x14) == 1 && (*(int *)(iVar2 + 0x18) != 0)))) &&
       (iVar3 = FUN_ram_40399d6c(*(int *)(iVar2 + 0x18),_DAT_ram_3fcb61bc + 4,0x10), iVar3 == 0)) {
      FUN_ram_4206373c(0x3fcb5ffc);
LAB_ram_4206510c:
      thunk_FUN_ram_40390608(iVar2);
      return 0;
    }
    if ((((param_3 != 0) && (3 < param_4)) && (_DAT_ram_3fcb6328 == *(short *)(param_3 + 3))) &&
       (_DAT_ram_3fcb6328 == 0x13)) {
      param_3 = param_3 + 5;
      iVar8 = param_4 - 3;
      uVar4 = FUN_ram_4205eb7a(_DAT_ram_3fcb6324,0,param_3,iVar8);
      iVar3 = FUN_ram_420658dc(uVar4,0x20);
      if (iVar3 != 0) {
        iVar5 = FUN_ram_4205eab2(_DAT_ram_3fcb6324,0);
        if (iVar5 != 0) {
          uStack_a0 = *(undefined4 *)(iVar5 + 8);
          uStack_98 = *(undefined4 *)(iVar5 + 4);
          iStack_9c = param_3;
          iStack_94 = iVar8;
          iVar6 = FUN_ram_42021b4e(2,&uStack_a0,&uStack_98,auStack_90);
          if ((-1 < iVar6) && (iVar5 = FUN_ram_420658dc(iVar5,0x20), iVar5 != 0)) {
            iVar6 = FUN_ram_4206582a(*(int *)(iVar5 + 4) + (param_4 - 1));
            if (iVar6 != 0) {
              if (*(int *)(iVar5 + 8) != 0) {
                FUN_ram_42063088(iVar6,*(int *)(iVar5 + 8),*(undefined4 *)(iVar5 + 4));
              }
              FUN_ram_4206587c(iVar5);
              FUN_ram_42063088(iVar6,param_3,iVar8);
              sVar1 = _DAT_ram_3fcb6328;
              puVar7 = (undefined1 *)FUN_ram_420658ce(iVar6,2);
              puVar7[1] = (char)((ushort)sVar1 >> 8);
              *puVar7 = (char)sVar1;
              iVar8 = FUN_ram_42021b6e(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 4),
                                       *(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 4),
                                       auStack_70);
              if (-1 < iVar8) {
                FUN_ram_4206587c(iVar6);
                FUN_ram_420658a8(iVar3);
                iVar8 = FUN_ram_42062846(auStack_70,0x20,0,0x3c0733b0,0x12,auStack_50);
                if (-1 < iVar8) {
                  thunk_FUN_ram_420293a6(auStack_70,0x20);
                  FUN_ram_40399daa(0x3fcb5ffc,auStack_50,0x20);
                  _DAT_ram_3fcb603c = 0x20;
                  FUN_ram_42062d74(_DAT_ram_3fcb61b8,0x3fcb5ffc,0x20,auStack_90,0,0,0x3fcb6226,
                                   0x3fcb6220,_DAT_ram_3fcb61f4,_DAT_ram_3fcb61ec);
                  goto LAB_ram_4206510c;
                }
              }
            }
            goto LAB_ram_42065146;
          }
        }
        iVar6 = 0;
        goto LAB_ram_42065146;
      }
    }
  }
  iVar6 = 0;
  iVar5 = 0;
  iVar3 = 0;
LAB_ram_42065146:
  thunk_FUN_ram_40390608(iVar2);
  FUN_ram_4206587c(iVar5);
  FUN_ram_4206587c(iVar6);
  FUN_ram_420658a8(iVar3);
  return 0xffffffff;
}

