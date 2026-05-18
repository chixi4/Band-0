
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420306a8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_28;
  int aiStack_24 [4];
  
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420365de(param_1);
  if (iVar2 == 0) {
    (*(code *)&SUB_ram_40011a08)(param_3);
    uVar1 = 7;
    goto LAB_ram_420306d2;
  }
  if (param_2 == 1) {
    if (*(int *)(iVar2 + 0x3c) != 0) {
      param_3 = (*(code *)&SUB_ram_40011a20)(*(int *)(iVar2 + 0x3c),param_3);
      goto LAB_ram_420306f6;
    }
    (*(code *)&SUB_ram_40011a08)(param_3);
  }
  else {
    if (param_2 == 2) {
      if (*(int *)(iVar2 + 0x3c) != 0) {
        (*(code *)&SUB_ram_40011a08)();
        *(undefined4 *)(iVar2 + 0x40) = 0;
      }
LAB_ram_420306f6:
      uVar6 = (uint)*(ushort *)(iVar2 + 0x40);
      *(undefined4 *)(iVar2 + 0x3c) = param_3;
      if (uVar6 == 0) {
        iVar3 = FUN_ram_42030602(param_3,&uStack_28);
        if (iVar3 == 0) {
          (*(code *)&SUB_ram_400119dc)(*(undefined4 *)(iVar2 + 0x3c),4);
          uVar6 = uStack_28 & 0xffff;
          *(uint *)(iVar2 + 0x40) = uStack_28;
          goto LAB_ram_4203071e;
        }
      }
      else {
LAB_ram_4203071e:
        aiStack_24[0] = *(int *)(iVar2 + 0x3c);
        if (uVar6 == *(ushort *)(aiStack_24[0] + 0x10)) {
          *(undefined4 *)(iVar2 + 0x3c) = 0;
          *(undefined4 *)(iVar2 + 0x40) = 0;
          iVar2 = FUN_ram_420363e2(iVar2,*(undefined2 *)(iVar2 + 0x42));
          thunk_FUN_ram_4202b7f6();
          if (iVar2 == 0) {
            FUN_ram_42036a58(param_1,0,0);
            (*(code *)&SUB_ram_40011a08)(aiStack_24[0]);
            return 5;
          }
          if ((0x3f < (ushort)(*(short *)(iVar2 + 6) - 0x40U)) || (uVar6 <= *(ushort *)(iVar2 + 10))
             ) {
            if (*(short *)(iVar2 + 8) == 4) {
              uVar5 = FUN_ram_4202c63e(iVar2);
            }
            else {
              uVar5 = (uint)*(ushort *)(iVar2 + 10);
            }
            if (uVar6 <= uVar5) {
              uVar1 = (**(code **)(iVar2 + 0x10))(iVar2,aiStack_24);
              (*(code *)&SUB_ram_40011a08)(aiStack_24[0]);
              return uVar1;
            }
          }
          (*(code *)&SUB_ram_40011a08)(aiStack_24[0]);
          return 10;
        }
        if ((int)(uVar6 - *(ushort *)(aiStack_24[0] + 0x10)) < 1) goto LAB_ram_420307a0;
        iVar3 = (**(code **)(_DAT_ram_3fcb6a44 + 0x84))();
        iVar4 = (**(code **)(_DAT_ram_3fcb6a44 + 0x90))(30000);
        *(int *)(iVar2 + 0x44) = iVar4 + iVar3;
        FUN_ram_4202bac4();
      }
      uVar1 = 1;
      goto LAB_ram_420306d2;
    }
    (*(code *)&SUB_ram_40011a08)(param_3);
    aiStack_24[0] = *(int *)(iVar2 + 0x3c);
LAB_ram_420307a0:
    (*(code *)&SUB_ram_40011a08)(aiStack_24[0]);
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0;
  }
  uVar1 = 10;
LAB_ram_420306d2:
  thunk_FUN_ram_4202b7f6();
  return uVar1;
}

