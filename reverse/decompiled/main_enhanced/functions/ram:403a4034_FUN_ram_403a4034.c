
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a4034(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar5 = *(int *)(_DAT_ram_3fcdff68 + 0xc);
  if (iVar5 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x3010,0);
    return 0xffffffff;
  }
  bVar1 = *(byte *)(param_1 + 8);
  if (((bVar1 & 2) == 0) || (uVar3 = *(ushort *)(param_1 + 10), (uVar3 & 0xffbf) != 0)) {
    uVar10 = 1;
    uVar11 = 0;
LAB_ram_403a4146:
    iVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0x4f0))(iVar5);
    if ((iVar6 != 0) &&
       (((*(byte *)(iVar5 + 0x78) & 4) != 0 && ((*(ushort *)(iVar5 + 0xc) & 2) != 0)))) {
      *(byte *)(iVar5 + 0x78) = *(byte *)(iVar5 + 0x78) | 8;
      uVar3 = *(ushort *)(iVar5 + 10);
      goto joined_r0x403a417a;
    }
  }
  else {
    bVar2 = *param_2;
    (*(code *)_DAT_ram_3fcdfed0[300])();
    if ((bVar2 & 0xf) == 5) {
      uVar10 = 2;
      uVar11 = 1;
      if (uVar3 == 0) goto LAB_ram_403a409a;
      (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x300f,*(undefined1 *)(iVar5 + 1),uVar3);
      uVar10 = 1;
      uVar11 = 0;
    }
    else {
      uVar10 = 1;
      uVar11 = 0;
LAB_ram_403a409a:
      iVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0xe4))(param_2[1] + 2);
      if (iVar6 == 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x300e,*(undefined1 *)(iVar5 + 1));
      }
      else {
        uVar7 = (*(code *)_DAT_ram_3fcdfed0[0x148])();
        iVar4 = _DAT_ram_3fcdff68;
        iVar8 = _DAT_ram_3fcdfecc;
        *(undefined4 *)(param_1 + 0x14) = uVar7;
        pcVar9 = *(code **)(iVar8 + 0x4f0);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar4 + 0xc);
        iVar8 = (*pcVar9)(iVar5);
        if (iVar8 == 0) {
          iVar8 = (**(code **)(_DAT_ram_3fcdfecc + 0x4ec))(iVar5);
          if (iVar8 == 0) {
            (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                      (0x6ed,&DAT_ram_3c0f6c20,*(undefined2 *)(iVar5 + 10),0);
          }
        }
        else {
          *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x1000;
        }
        (*(code *)_DAT_ram_3fcdfed0[0x10e])(param_2,iVar6);
        (*(code *)_DAT_ram_3fcdfed0[0xb6])(iVar6);
      }
      if (((bVar1 & 3) != 3) || ((*(ushort *)(iVar5 + 0xc) & 2) == 0)) goto LAB_ram_403a4146;
    }
  }
  uVar3 = *(ushort *)(iVar5 + 10);
joined_r0x403a417a:
  if ((int)((uint)uVar3 << 0x12) < 0) {
    (*(code *)_DAT_ram_3fcdfed0[0xe])(iVar5);
  }
  else {
    (*(code *)*_DAT_ram_3fcdfed0)(iVar5,uVar11);
  }
  return uVar10;
}

