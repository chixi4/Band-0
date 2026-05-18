
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203ee56(void)

{
  ushort *puVar1;
  int unaff_s1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  ushort uVar6;
  int unaff_s3;
  int unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint uVar7;
  ushort *unaff_s11;
  undefined4 in_stack_0000000c;
  
  if (unaff_s11 == (ushort *)0x0) goto LAB_ram_4203eec6;
  uVar6 = unaff_s11[8];
  uVar3 = unaff_s11[0xe];
  uVar2 = (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x340))();
  puVar5 = unaff_s11 + 0xc;
  uVar2 = uVar2 & 0xff;
  uVar7 = 1;
  if (uVar3 == 0) {
    uVar7 = *(byte *)((int)unaff_s11 + 0x1b) & 3;
  }
  do {
    iVar4 = (**(code **)(*(int *)(unaff_s5 + -0x130) + 0x19c))();
    if (iVar4 != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0xa04))
                (0x7024,uVar3,uVar2,uVar7,*(code **)(_DAT_ram_3fcdfecc + 0xa04));
      *(ushort **)(unaff_s1 + 0xc4) = unaff_s11;
      return;
    }
    if ((ushort)(uVar2 + uVar3) < uVar6) {
      puVar5[2] = uVar2 + uVar3;
      *(ushort **)(unaff_s1 + 0xc4) = unaff_s11;
      FUN_ram_4203ee56();
      return;
    }
    (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x904))(unaff_s11);
    *(undefined4 *)(unaff_s1 + 0xc4) = 0;
LAB_ram_4203eec6:
    puVar1 = *(ushort **)(unaff_s1 + 0xe4);
    if (puVar1 == (ushort *)0x0) {
      return;
    }
    unaff_s11 = puVar1 + -8;
    if (unaff_s6 < *(byte *)(unaff_s1 + 0x118)) {
      if (*(byte *)(unaff_s1 + 0xb) == 1) {
LAB_ram_4203ef44:
        iVar4 = (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x418))(puVar1);
        if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4203efee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(unaff_s3 + -0x134) + 0xa00))
                    (0x7025,*(undefined1 *)(unaff_s1 + 0x118),*(char *)(unaff_s1 + 0xb) == '\x01');
          return;
        }
        puVar5 = *(ushort **)(unaff_s1 + 0xe4);
      }
      else {
        if (*(byte *)(unaff_s1 + 0x118) < 5) goto LAB_ram_4203ef32;
        puVar5 = puVar1;
        if (*(byte *)(unaff_s1 + 0xb) == unaff_s6) goto LAB_ram_4203ef44;
      }
      iVar4 = *(int *)(puVar5 + 2);
      *(int *)(unaff_s1 + 0xe4) = iVar4;
    }
    else {
LAB_ram_4203ef32:
      iVar4 = *(int *)(puVar1 + 2);
      *(int *)(unaff_s1 + 0xe4) = iVar4;
    }
    if (iVar4 == 0) {
      *(undefined4 *)(unaff_s1 + 0xe8) = in_stack_0000000c;
    }
    uVar6 = *puVar1;
    puVar5 = puVar1 + 4;
    uVar7 = *(byte *)((int)puVar1 + 0xb) & 3;
    uVar3 = uVar6;
    if (uVar7 != unaff_s7) {
      uVar3 = (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x340))();
    }
    uVar2 = uVar3 & 0xff;
    *(char *)(puVar1 + 5) = (char)uVar3;
    uVar3 = 0;
  } while( true );
}

