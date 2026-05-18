
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42043a06(undefined1 *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  code *pcVar10;
  
  if (param_2 != 7) {
    return 0x12;
  }
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x1e4))();
  if (iVar2 != 0) {
    puVar9 = param_1 + 1;
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xb4))(puVar9,*param_1);
    if (iVar2 == 0) {
      puVar3 = (uint *)(**(code **)(_DAT_ram_3fcdfecc + 0x1ec))(puVar9,*param_1);
    }
    else {
      puVar3 = (uint *)(**(code **)(_DAT_ram_3fcdfecc + 0x204))(puVar9);
    }
    if (puVar3 != (uint *)0x0) {
      if (_DAT_ram_3fcdfeec == (uint *)0x0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x110))(800,&DAT_ram_3c0f6f4c,0,0);
      }
      iVar2 = *_DAT_ram_3fcdfef4;
      if (*(uint **)(iVar2 + 4) == puVar3) {
        puVar6 = _DAT_ram_3fcdfeec;
        if (_DAT_ram_3fcdfeec == puVar3) {
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        else {
          do {
            puVar8 = puVar6;
            puVar6 = (uint *)puVar8[1];
          } while (puVar6 != puVar3);
          *(uint **)(iVar2 + 4) = puVar8;
        }
      }
      if ((*puVar3 & 0x200) == 0) {
        puVar6 = (uint *)puVar3[1];
      }
      else {
        pcVar10 = *(code **)(_DAT_ram_3fcdfecc + 0xbe0);
        uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x1c4))
                          (puVar3,0,0,iVar2,*(code **)(_DAT_ram_3fcdfecc + 0x1c4));
        uVar1 = *(ushort *)((int)puVar3 + 2);
        uVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x1c8))(puVar3,0);
        uVar4 = (*pcVar10)(uVar4,uVar1 & 1,uVar5);
        (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0xc000,uVar4);
        puVar6 = (uint *)puVar3[1];
      }
      puVar8 = _DAT_ram_3fcdfeec;
      if (_DAT_ram_3fcdfeec == puVar3) {
        _DAT_ram_3fcdfeec = puVar6;
        if (puVar6 == (uint *)0x0) {
          _DAT_ram_3fcdfef0 = (uint *)&DAT_ram_3fcdfeec;
        }
      }
      else {
        do {
          puVar7 = puVar8;
          puVar8 = (uint *)puVar7[1];
        } while ((uint *)puVar7[1] != puVar3);
        puVar7[1] = (uint)puVar6;
        if (puVar6 == (uint *)0x0) {
          _DAT_ram_3fcdfef0 = puVar7 + 1;
        }
      }
      (**(code **)(_DAT_ram_3fcdfecc + 0x84c))(_DAT_ram_3fcdfef4[1],puVar3);
      *(char *)(*_DAT_ram_3fcdfef4 + 2) = *(char *)(*_DAT_ram_3fcdfef4 + 2) + -1;
      (**(code **)(_DAT_ram_3fcdfed0 + 0x4f0))(_DAT_ram_3fcdfeec);
      if (*(char *)(*_DAT_ram_3fcdfef4 + 2) == '\0') {
        (**(code **)(_DAT_ram_3fcdfec4 + 0x68))(*_DAT_ram_3fcdfef4 + 0xc);
      }
      return 0;
    }
    return 2;
  }
  return 0xc;
}

