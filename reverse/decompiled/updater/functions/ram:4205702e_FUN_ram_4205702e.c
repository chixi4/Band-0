
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205702e(int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
                     undefined4 param_5,uint param_6)

{
  byte bVar1;
  char *pcVar2;
  int unaff_s0;
  int unaff_s1;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  char *unaff_s2;
  int iVar8;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint uVar9;
  uint unaff_s11;
  char *in_t3;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  uint uStack00000014;
  uint uStack00000018;
  char *pcStack0000001c;
  uint in_stack_0000002c;
  
  while (uStack00000014 = param_6, uStack00000018 = param_4, pcStack0000001c = in_t3,
        uVar3 = FUN_ram_420520b2(param_1,param_2), pcVar2 = pcStack0000001c,
        in_stack_00000010 == uVar3) {
    if (uStack00000014 <= unaff_s11) {
      if (uStack00000014 == unaff_s11) {
        uVar3 = FUN_ram_4205074c(in_stack_0000002c);
      }
      else {
        uVar3 = in_stack_0000002c & 0xff;
      }
      unaff_s2[unaff_s10] = '\x01';
      *(uint *)(&DAT_ram_3fcb5cf8 + unaff_s10 * 4) = uVar3;
      goto LAB_ram_420570f2;
    }
    if ((uStack00000014 & 3) != 0) break;
    *pcStack0000001c = '\x01';
    uVar4 = FUN_ram_4205074c(in_stack_0000002c);
    *(undefined4 *)(&DAT_ram_3fcb5cf8 + unaff_s10 * 4) = uVar4;
    param_4 = uStack00000018 + 4 & 0xffff;
    param_6 = uStack00000014 - 4 & 0xff;
    in_t3 = pcVar2 + 1;
    if (param_4 < uStack00000018) break;
    unaff_s10 = unaff_s10 + 1;
    param_1 = unaff_s8;
LAB_ram_42057018:
    unaff_s8 = param_1;
    if (*in_t3 != '\0') {
LAB_ram_420570f2:
      iVar5 = _DAT_ram_3fcb5cf8;
      uVar3 = unaff_s7 + unaff_s4;
      param_1 = unaff_s8;
      while( true ) {
        uVar7 = (uint)*(ushort *)((int)param_1 + 10);
        uVar9 = uVar3 & 0xffff;
        if (uVar7 <= uVar9) {
          uVar9 = uVar9 - uVar7 & 0xffff;
          unaff_s9 = unaff_s9 - uVar7 & 0xffff;
          if ((unaff_s9 <= uVar9) || (param_1 = (int *)*param_1, param_1 == (int *)0x0))
          goto code_r0x42056ece;
          in_stack_00000008 = param_1[1];
        }
        if (unaff_s9 <= uVar9) break;
        bVar1 = *(byte *)(in_stack_00000008 + uVar9);
        if (bVar1 == 0xff) break;
        param_4 = uVar9 + 2 & 0xffff;
        if (param_4 < uVar9) goto code_r0x42056ece;
        uVar3 = uVar9 + 1;
        if (uVar3 < *(ushort *)((int)param_1 + 10)) {
          bVar6 = ((byte *)(in_stack_00000008 + uVar9))[1];
LAB_ram_42056f2a:
          unaff_s7 = (uint)bVar6;
          param_6 = unaff_s7;
          if (bVar1 == 0x33) {
            if (unaff_s7 != 4) goto code_r0x42056ece;
            unaff_s10 = 3;
            goto LAB_ram_42057004;
          }
          if (0x33 < bVar1) {
            if (bVar1 == 0x36) {
              if (unaff_s7 != 4) goto code_r0x42056ece;
              unaff_s10 = 2;
              goto LAB_ram_42057004;
            }
            if (bVar1 < 0x37) {
              uVar3 = 1;
              if (bVar1 == 0x34) {
                if ((unaff_s7 != 1) || (unaff_s5 != 0xf0)) goto code_r0x42056ece;
                unaff_s10 = 0;
                goto LAB_ram_42057004;
              }
            }
            else {
              if (bVar1 != 0x3a) {
                if (bVar1 != 0x3b) goto LAB_ram_42056f4c;
                if (unaff_s7 != 4) goto code_r0x42056ece;
                unaff_s10 = 5;
                goto LAB_ram_42057004;
              }
              uVar3 = 4;
            }
            unaff_s10 = unaff_s7;
            if (unaff_s7 == uVar3) goto LAB_ram_42057004;
            goto code_r0x42056ece;
          }
          if (bVar1 == 1) {
            if (unaff_s7 != 4) goto code_r0x42056ece;
            unaff_s10 = 6;
            goto LAB_ram_42057004;
          }
          if (1 < bVar1) {
            if (bVar1 == 3) {
              if (unaff_s7 < 4) goto code_r0x42056ece;
              param_6 = 4;
              unaff_s10 = 7;
            }
            else {
              if (bVar1 != 6) goto LAB_ram_42056f4c;
              if ((bVar6 & 3) != 0) goto code_r0x42056ece;
LAB_ram_42057094:
              param_6 = unaff_s7;
              if (0xc < unaff_s7) {
                param_6 = 0xc;
              }
              unaff_s10 = 8;
            }
            goto LAB_ram_42057004;
          }
        }
        else {
          if (*param_1 != 0) {
            bVar6 = **(byte **)(*param_1 + 4);
            goto LAB_ram_42056f2a;
          }
          if (bVar1 == 0x34) goto code_r0x42056ece;
          if (0x34 < bVar1) {
            if (bVar1 == 0x3a) goto code_r0x42056ece;
            if (bVar1 < 0x3b) {
              if (bVar1 == 0x35) goto code_r0x42056ece;
              bVar6 = 0x36;
            }
            else {
              bVar6 = 0x3b;
            }
            goto LAB_ram_42057200;
          }
          if (bVar1 == 3) goto code_r0x42056ece;
          if (3 < bVar1) {
            if (bVar1 == 6) {
              unaff_s7 = 0;
              goto LAB_ram_42057094;
            }
            bVar6 = 0x33;
            goto LAB_ram_42057200;
          }
          if (bVar1 != 0) goto code_r0x420571fe;
        }
      }
      if (*unaff_s2 != '\0') {
        *unaff_s2 = '\0';
        if (iVar5 == 1) {
LAB_ram_4205712c:
          FUN_ram_42056e26();
          return;
        }
        if (iVar5 == 2) goto LAB_ram_42057118;
        if (iVar5 == 3) goto LAB_ram_4205712c;
      }
      uVar4 = _DAT_ram_3fcb5d00;
      if (unaff_s6 != 0) {
LAB_ram_42057118:
        FUN_ram_42056e26();
        return;
      }
      if (unaff_s2[1] == '\0') break;
      iVar5 = *(int *)(unaff_s1 + 4);
      if (DAT_ram_3fcb5cfc != '\x05') {
        if (DAT_ram_3fcb5cfc == '\x06') {
          if (((byte)(*(char *)(unaff_s3 + 5) - 3U) < 3) || (*(char *)(unaff_s3 + 5) == '\x01')) {
            FUN_ram_420561aa(*(undefined4 *)(unaff_s0 + 0x20),0xc);
            FUN_ram_42051808();
            FUN_ram_42056786();
            FUN_ram_42056ece();
            return;
          }
        }
        else if (((DAT_ram_3fcb5cfc == '\x02') && (*(char *)(unaff_s3 + 5) == '\x06')) &&
                (unaff_s2[2] != '\0')) {
          iVar8 = *(int *)(unaff_s0 + 0x20);
          *(undefined4 *)(iVar8 + 0xc) = 0;
          uVar4 = FUN_ram_4205074c(uVar4);
          *(undefined4 *)(iVar8 + 0x28) = uVar4;
          *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar5 + 0x10);
          FUN_ram_42056b56();
          FUN_ram_42056ece();
          return;
        }
        break;
      }
      if ((*(byte *)(unaff_s3 + 5) & 0xfd) == 1) {
        FUN_ram_42056a52(*(undefined4 *)(unaff_s0 + 0x20));
        if ((*(byte *)(unaff_s0 + 0x39) & 8) != 0) {
          FUN_ram_420561aa(*(undefined4 *)(unaff_s0 + 0x20),8);
          FUN_ram_42059c32();
          FUN_ram_42056ece();
          return;
        }
      }
      else {
        if (1 < (byte)(*(byte *)(unaff_s3 + 5) - 4)) break;
        FUN_ram_42056a52(*(undefined4 *)(unaff_s0 + 0x20));
      }
      FUN_ram_420563c8();
      FUN_ram_42056ece();
      return;
    }
    in_stack_00000010 = param_6;
    if (unaff_s11 < param_6) {
      in_stack_00000010 = 4;
    }
    param_2 = &stack0x0000002c;
  }
code_r0x42056ece:
  FUN_ram_42051d02();
  return;
code_r0x420571fe:
  bVar6 = 1;
LAB_ram_42057200:
  if (bVar1 == bVar6) goto code_r0x42056ece;
  unaff_s7 = 0;
LAB_ram_42056f4c:
  FUN_ram_420595fc();
  param_6 = 0;
  unaff_s10 = 0xffffffff;
LAB_ram_42057004:
  if (in_stack_0000000c < (int)(uVar9 + unaff_s7)) goto code_r0x42056ece;
  unaff_s4 = param_4;
  unaff_s8 = param_1;
  if (param_6 != 0) goto code_r0x4205700e;
  goto LAB_ram_420570f2;
code_r0x4205700e:
  in_stack_0000002c = 0;
  in_t3 = unaff_s2 + unaff_s10;
  unaff_s11 = 4;
  goto LAB_ram_42057018;
}

