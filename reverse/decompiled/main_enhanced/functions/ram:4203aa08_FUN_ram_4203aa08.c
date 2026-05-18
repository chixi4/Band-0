
void FUN_ram_4203aa08(ushort *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined4 in_a4;
  int iVar9;
  char cVar10;
  code *pcVar11;
  int unaff_s3;
  char cStack0000000b;
  code *in_stack_0000000c;
  
  if (param_1 == (ushort *)0x0) {
    pcVar11 = *(code **)(*(int *)(unaff_s3 + -0x134) + 0x110);
    (*pcVar11)(0x7d7,&DAT_ram_3c0f5914,0,0,in_a4,pcVar11);
  }
  (**(code **)(*(int *)(unaff_s3 + -0x134) + 0xb60))(0,1);
  (**(code **)(*(int *)(unaff_s3 + -0x134) + 0xb54))(0xb000,(byte)param_1[1] + 3,param_1);
  (**(code **)(*(int *)(unaff_s3 + -0x134) + 0xb60))(0,0);
  bVar1 = *(byte *)((int)param_1 + 1);
  bVar2 = bVar1 >> 2;
  cStack0000000b = '\0';
  uVar7 = *param_1 & 0x3ff;
  puVar8 = param_1 + 3;
  uVar3 = (undefined1)*param_1;
  if (bVar2 != 4) {
    if (4 < bVar2) {
      if (bVar2 == 8) {
        pcVar11 = *(code **)(*(int *)(unaff_s3 + -0x134) + 0x774);
        iVar6 = (*pcVar11)((undefined1 *)((int)param_1 + 3),(char)param_1[1],uVar7,puVar8,
                           &stack0x0000000b,&stack0x0000000c,pcVar11);
      }
      else if (bVar2 == 0x3f) {
        pcVar11 = *(code **)(*(int *)(unaff_s3 + -0x134) + 0x7c4);
        iVar6 = (*pcVar11)((undefined1 *)((int)param_1 + 3),(char)param_1[1],uVar7,puVar8,
                           &stack0x0000000b,pcVar11);
      }
      else {
        if (bVar2 != 5) goto LAB_ram_4203aa80;
        pcVar11 = *(code **)(*(int *)(unaff_s3 + -0x134) + 0x7c0);
        iVar6 = (*pcVar11)((undefined1 *)((int)param_1 + 3),(char)param_1[1],uVar7,puVar8,
                           &stack0x0000000b,pcVar11);
      }
      goto LAB_ram_4203aaf0;
    }
    if (bVar2 == 1) {
      iVar6 = (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x7a0))
                        ((undefined1 *)((int)param_1 + 3),(char)param_1[1]);
      goto LAB_ram_4203aaf0;
    }
    if (bVar2 == 3) {
      pcVar11 = *(code **)(*(int *)(unaff_s3 + -0x134) + 0x74c);
      iVar6 = (*pcVar11)((undefined1 *)((int)param_1 + 3),(char)param_1[1],uVar7,puVar8,
                         &stack0x0000000b,pcVar11);
      goto LAB_ram_4203aaf0;
    }
LAB_ram_4203aa80:
    uVar5 = 1;
    cVar10 = '\x04';
    goto LAB_ram_4203aa84;
  }
  pcVar11 = *(code **)(*(int *)(unaff_s3 + -0x134) + 0x760);
  iVar6 = (*pcVar11)((undefined1 *)((int)param_1 + 3),(char)param_1[1],uVar7,puVar8,&stack0x0000000b
                     ,pcVar11);
LAB_ram_4203aaf0:
  iVar9 = *(int *)(unaff_s3 + -0x134);
  if (iVar6 == 0xffff) {
    (**(code **)(iVar9 + 0x34))(param_1);
    goto LAB_ram_4203aab8;
  }
  uVar5 = (undefined1)iVar6;
  if (iVar6 < 0) {
    (**(code **)(iVar9 + 0x110))(0x815,&DAT_ram_3c0f5914,iVar6,0,iVar9,*(code **)(iVar9 + 0x110));
    cVar10 = cStack0000000b + '\x04';
LAB_ram_4203aa84:
    *(undefined1 *)param_1 = 0xe;
    *(char *)((int)param_1 + 1) = cVar10;
    uVar4 = (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x75c))();
    *(undefined1 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((int)param_1 + 3) = uVar3;
    *(byte *)(param_1 + 2) = bVar1;
    *(undefined1 *)((int)param_1 + 5) = uVar5;
  }
  else {
    pcVar11 = *(code **)(iVar9 + 0x75c);
    if (iVar6 < 0x100) {
      cVar10 = cStack0000000b + '\x04';
      goto LAB_ram_4203aa84;
    }
    *(undefined1 *)param_1 = 0xf;
    *(undefined1 *)((int)param_1 + 1) = 4;
    *(undefined1 *)(param_1 + 1) = uVar5;
    uVar5 = (*pcVar11)();
    *(undefined1 *)((int)param_1 + 3) = uVar5;
    *(undefined1 *)(param_1 + 2) = uVar3;
    *(byte *)((int)param_1 + 5) = bVar1;
  }
  (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x758))(param_1);
LAB_ram_4203aab8:
  if (in_stack_0000000c != (code *)0x0) {
    (*in_stack_0000000c)();
  }
  return;
}

