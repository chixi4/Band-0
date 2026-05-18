
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203f892(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  uint *unaff_s0;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int in_a5;
  int unaff_s2;
  undefined4 uVar9;
  byte *unaff_s3;
  code *pcVar10;
  uint uVar11;
  
  iVar7 = *(int *)(unaff_s2 + -0x130);
  if ((in_a5 != 0) && (*(int *)(in_a5 + 0x14) != 0)) {
    (**(code **)(iVar7 + 0x25c))(param_1,0);
    iVar7 = *(int *)(unaff_s2 + -0x130);
  }
  *unaff_s0 = *unaff_s0 & 0xfffffffe;
  uVar3 = (**(code **)(iVar7 + 0x56c))();
  unaff_s0[0x20] = uVar3;
  if (*(char *)((int)unaff_s0 + 0xb) != '\x02') {
    iVar7 = (**(code **)(*(int *)(unaff_s2 + -0x130) + 0x1a0))();
    goto joined_r0x4203faa8;
  }
  uVar2 = *(ushort *)((int)unaff_s0 + 0x8e);
  iVar8 = *(int *)(unaff_s3 + 0x20);
  pcVar10 = *(code **)(_DAT_ram_3fcdfecc + 0xd0);
  bVar6 = unaff_s3[5];
  unaff_s0[0x28] = *(uint *)(unaff_s3 + 0x1c);
  iVar7 = (*pcVar10)(0x22,bVar6);
  bVar6 = *unaff_s3;
  iVar7 = iVar7 + (uint)uVar2 * 0x4e2 + iVar8;
  iVar8 = iVar7 + 0x4e2;
  if (bVar6 < 0x25) {
    bVar1 = unaff_s3[4];
    if ((char)bVar1 < '\x01') {
LAB_ram_4203fb0a:
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                (0x738,&DAT_ram_3c0f6dd0,0,0,bVar6,*(code **)(_DAT_ram_3fcdfecc + 0x110));
    }
    else if ((char)bVar1 < '\x03') {
      iVar8 = iVar7 + 0x9c4;
    }
    else {
      bVar6 = 3;
      if (bVar1 != 3) goto LAB_ram_4203fb0a;
      iVar8 = iVar7 + 0xea6;
    }
  }
  iVar7 = (**(code **)(*(int *)(unaff_s2 + -0x130) + 0x584))(iVar8);
  pcVar10 = *(code **)(*(int *)(unaff_s2 + -0x130) + 0x580);
  unaff_s0[0x24] = *(int *)(unaff_s3 + 0x1c) + iVar7;
  iVar5 = (*pcVar10)();
  iVar7 = _DAT_ram_3fcdff6c;
  *(char *)(unaff_s0 + 0x26) = (char)(iVar8 - iVar5);
  if ((uint)*(ushort *)(iVar7 + 0x24) == (iVar8 - iVar5 & 0xffU)) {
    *(undefined1 *)(unaff_s0 + 0x26) = 0;
    uVar3 = unaff_s0[0x24] + 1;
    unaff_s0[0x24] = uVar3;
  }
  else {
    uVar3 = unaff_s0[0x24];
  }
  uVar11 = (uint)DAT_ram_3fcdfe66;
  uVar2 = *(ushort *)(iVar7 + 0x26);
  iVar7 = *(int *)(unaff_s2 + -0x130);
  unaff_s0[0x2a] = 0;
  pcVar10 = *(code **)(iVar7 + 0x584);
  unaff_s0[0x29] = (uint)*(byte *)((int)unaff_s0 + 0x4f) * 0x4e2;
  iVar7 = (*pcVar10)();
  pcVar10 = *(code **)(_DAT_ram_3fcdfecc + 0x114);
  unaff_s0[0x1d] = uVar11 * uVar2 + 1 + uVar3 + iVar7;
  iVar7 = (*pcVar10)();
  iVar8 = *(int *)(unaff_s2 + -0x130);
  bVar6 = *(byte *)(iVar7 + 0x26);
  *(char *)((int)unaff_s0 + 0x99) = (char)unaff_s0[0x26];
  pcVar10 = *(code **)(iVar8 + 0x1a4);
  unaff_s0[0x2b] = (uint)bVar6;
  unaff_s0[0x25] = unaff_s0[0x24];
  unaff_s0[0x1e] = unaff_s0[0x1d];
  iVar7 = (*pcVar10)();
joined_r0x4203faa8:
  if (iVar7 == 0) {
    iVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0x35c))();
    if (iVar7 == 0) {
      *unaff_s0 = *unaff_s0 | 0x1000000;
    }
    if (*(char *)((int)unaff_s0 + 0xb) == '\x02') {
      (**(code **)(_DAT_ram_3fcdfecc + 0x5a8))();
    }
    else {
      (**(code **)(_DAT_ram_3fcdfecc + 0x3e4))();
      (**(code **)(_DAT_ram_3fcdfecc + 0x120))();
      iVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      if (*(char *)(iVar7 + 99) != '\0') {
        (**(code **)(_DAT_ram_3fcdfecc + 0x6f4))();
      }
      if ((*(byte *)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0xf) & 8) == 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x44c))();
      }
    }
    uVar3 = (uint)(ushort)unaff_s0[0x21] * 0x1d4c;
    uVar9 = 1;
    pcVar10 = *(code **)(_DAT_ram_3fcdfec4 + 100);
    uVar4 = (**(code **)(_DAT_ram_3fcdfec4 + 0x90))(uVar3 / 1000 + (uint)(uVar3 % 1000 != 0));
    (*pcVar10)(unaff_s0 + 0x3d,uVar4);
    if ((_DAT_ram_3fcdfea8 != (undefined4 *)0x0) && ((code *)*_DAT_ram_3fcdfea8 != (code *)0x0)) {
      (*(code *)*_DAT_ram_3fcdfea8)((char)unaff_s0[2],7,1);
    }
  }
  else {
    uVar9 = 0;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xa24))();
  return uVar9;
}

