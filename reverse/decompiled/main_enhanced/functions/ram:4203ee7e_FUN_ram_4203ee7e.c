
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203ee7e(void)

{
  ushort *puVar1;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint unaff_s2;
  int unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint uVar5;
  uint unaff_s9;
  int unaff_s10;
  ushort *unaff_s11;
  undefined4 in_stack_0000000c;
  
  uVar5 = 1;
  if (unaff_s10 == 0) {
    uVar5 = *(byte *)((int)unaff_s11 + 0x1b) & 3;
  }
  do {
    iVar2 = (**(code **)(*(int *)(unaff_s5 + -0x130) + 0x19c))();
    if (iVar2 != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0xa04))
                (0x7024,unaff_s10,unaff_s9,uVar5,*(code **)(_DAT_ram_3fcdfecc + 0xa04));
      *(ushort **)(unaff_s1 + 0xc4) = unaff_s11;
      return;
    }
    uVar5 = (unaff_s9 & 0xffff) + unaff_s10;
    if ((uVar5 & 0xffff) < unaff_s2) {
      unaff_s4[2] = (ushort)(uVar5 * 0x10000 >> 0x10);
      *(ushort **)(unaff_s1 + 0xc4) = unaff_s11;
      FUN_ram_4203ee56();
      return;
    }
    (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x904))(unaff_s11);
    *(undefined4 *)(unaff_s1 + 0xc4) = 0;
    puVar1 = *(ushort **)(unaff_s1 + 0xe4);
    if (puVar1 == (ushort *)0x0) {
      return;
    }
    unaff_s11 = puVar1 + -8;
    if (unaff_s6 < *(byte *)(unaff_s1 + 0x118)) {
      if (*(byte *)(unaff_s1 + 0xb) == 1) {
LAB_ram_4203ef44:
        iVar2 = (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x418))(puVar1);
        if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4203efee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(unaff_s3 + -0x134) + 0xa00))
                    (0x7025,*(undefined1 *)(unaff_s1 + 0x118),*(char *)(unaff_s1 + 0xb) == '\x01');
          return;
        }
        puVar4 = *(ushort **)(unaff_s1 + 0xe4);
      }
      else {
        if (*(byte *)(unaff_s1 + 0x118) < 5) goto LAB_ram_4203ef32;
        puVar4 = puVar1;
        if (*(byte *)(unaff_s1 + 0xb) == unaff_s6) goto LAB_ram_4203ef44;
      }
      iVar2 = *(int *)(puVar4 + 2);
      *(int *)(unaff_s1 + 0xe4) = iVar2;
    }
    else {
LAB_ram_4203ef32:
      iVar2 = *(int *)(puVar1 + 2);
      *(int *)(unaff_s1 + 0xe4) = iVar2;
    }
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_s1 + 0xe8) = in_stack_0000000c;
    }
    unaff_s2 = (uint)*puVar1;
    unaff_s4 = puVar1 + 4;
    uVar5 = *(byte *)((int)puVar1 + 0xb) & 3;
    uVar3 = unaff_s2;
    if (uVar5 != unaff_s7) {
      uVar3 = (**(code **)(*(int *)(unaff_s3 + -0x134) + 0x340))();
    }
    unaff_s9 = uVar3 & 0xff;
    *(char *)(puVar1 + 5) = (char)uVar3;
    unaff_s10 = 0;
  } while( true );
}

