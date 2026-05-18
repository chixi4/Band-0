
void FUN_ram_4202a72a(int param_1)

{
  uint unaff_s0;
  int unaff_s1;
  short sVar1;
  int iVar2;
  undefined1 *puVar3;
  short sVar4;
  uint uVar5;
  int *unaff_s2;
  byte *unaff_s3;
  uint unaff_s4;
  uint unaff_s9;
  uint in_stack_00000014;
  char in_stack_0000003c;
  
  do {
    sVar4 = 0;
    if (param_1 == 0) {
      iVar2 = FUN_ram_42029834();
      if (iVar2 == 0) {
        puVar3 = &stack0x00000018;
        uVar5 = in_stack_00000014 >> 0x10;
        if (in_stack_00000014 >> 0x10 == unaff_s9) {
          uVar5 = 2;
          puVar3 = &stack0x0000001c;
        }
        iVar2 = FUN_ram_4202ffe2(&stack0x0000003c,puVar3,uVar5);
        if (iVar2 == 0) {
          uVar5 = (uint)*unaff_s3;
          if (uVar5 == unaff_s9) {
            if (in_stack_0000003c == '\x10') goto LAB_ram_4202a78a;
          }
          else if (uVar5 == 0x14) {
            if (in_stack_0000003c != '\x10') goto LAB_ram_4202a78a;
          }
          else if (uVar5 == 0) {
            if (in_stack_0000003c == '\x10') {
              *unaff_s3 = (byte)unaff_s9;
            }
            else {
              *unaff_s3 = 0x14;
            }
LAB_ram_4202a78a:
            sVar4 = *(short *)((int)unaff_s2 + 10);
            goto LAB_ram_4202a690;
          }
LAB_ram_4202a7a2:
          iVar2 = 0;
LAB_ram_4202a6b2:
          if (*(ushort *)(unaff_s1 + 0x10) < 3) {
            FUN_ram_4202a648(5);
            return;
          }
          if (iVar2 == 0) goto code_r0x4202a648;
        }
      }
      if (iVar2 != 4) {
code_r0x4202a648:
        FUN_ram_42029b02();
        return;
      }
      goto LAB_ram_4202a768;
    }
LAB_ram_4202a690:
    do {
      do {
        unaff_s2 = (int *)*unaff_s2;
        if (unaff_s2 == (int *)0x0) {
          if (sVar4 == 0) goto LAB_ram_4202a7a2;
LAB_ram_4202a69c:
          iVar2 = FUN_ram_42029638();
          goto LAB_ram_4202a6b2;
        }
      } while (*(ushort *)((int)unaff_s2 + 10) < unaff_s0);
      if (unaff_s4 < *(ushort *)((int)unaff_s2 + 10)) {
        if (sVar4 != 0) goto LAB_ram_4202a69c;
        goto LAB_ram_4202a7a2;
      }
      if (sVar4 == 0) goto LAB_ram_4202a720;
      sVar1 = FUN_ram_420300a0(unaff_s2[1]);
    } while (1 < (ushort)(sVar1 + 0xd800U));
    iVar2 = FUN_ram_42029638();
    if (iVar2 != 0) {
      if (iVar2 == 6) {
        FUN_ram_4202a648();
        return;
      }
LAB_ram_4202a768:
      FUN_ram_4202a648(0);
      return;
    }
LAB_ram_4202a720:
    param_1 = FUN_ram_42030048(unaff_s2[1],&stack0x00000028);
  } while( true );
}

