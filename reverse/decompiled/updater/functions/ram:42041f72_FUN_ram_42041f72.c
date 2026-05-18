
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42041f72(int *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *local_70;
  byte *pbStack_68;
  byte *pbStack_64;
  uint uStack_60;
  
  if ((param_1 == (int *)0x0) || (iVar6 = *param_1, iVar6 == 0)) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d8f0,0x3c072e50,0xb17);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = *(undefined2 *)(param_2 + 0x18);
  uVar10 = (uint)*(ushort *)(param_2 + 0x1a);
  uVar2 = *(undefined2 *)(param_2 + 0x1c);
  pbVar19 = (byte *)(param_2 + 0x1e);
  if (uVar10 == 0) {
    uStack_60 = 0;
    pbStack_64 = (byte *)0x0;
    pbVar22 = (byte *)0x0;
    pbStack_68 = (byte *)0x0;
    local_70 = (byte *)0x0;
    pbVar12 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
    pbVar14 = (byte *)0x0;
    pbVar16 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    pbVar21 = (byte *)0x0;
    do {
      if ((int)(param_3 - (int)pbVar19) < 2) {
        if (pbVar16 == (byte *)0x0) {
          return 0xffffffff;
        }
        if (0xf < pbVar16[1]) {
          return 0xffffffff;
        }
        if ((pbVar18 != (byte *)0x0) && ((int)(0xf - (uint)pbVar16[1]) < (int)(uint)pbVar18[1])) {
          return 0xffffffff;
        }
        (*(code *)&SUB_ram_40012074)(param_1,pbVar16,pbVar18,0x2f);
        *(undefined2 *)((int)param_1 + 0x2a) = uVar1;
        *(undefined2 *)((int)param_1 + 0x26) = uVar2;
        if (*(int *)(iVar6 + 0xac) == 0) {
          *(undefined4 *)(iVar6 + 0xac) = _DAT_ram_6004d000;
        }
        if ((((*(uint *)(iVar6 + 0xa4) & 0x2000) == 0) || (pbVar21 == (byte *)0x0)) ||
           (iVar8 = FUN_ram_420409fc(param_1,pbVar21), iVar8 < 0)) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
        else {
          param_1[3] = param_1[3] | 2;
          FUN_ram_42043116(param_1,(int)param_1 + 0x87);
        }
        if (((pbVar11 != (byte *)0x0) && (pbVar12 != (byte *)0x0)) &&
           ((*(uint *)(iVar6 + 300) & 0x80000) != 0)) {
          (*(code *)&SUB_ram_4001206c)(param_1);
          FUN_ram_42036eba(param_1,pbVar11,pbVar12);
          FUN_ram_42037036(param_1,pbVar11,0x30);
          FUN_ram_42037136(param_1,pbVar12);
        }
        if ((local_70 != (byte *)0x0) && (iVar6 = FUN_ram_42040e52(), iVar6 != 0)) {
          FUN_ram_42040ca2(param_1,local_70);
        }
        if ((_DAT_ram_3fcb516c & 1) != 0) {
          param_1[0xba] = 0;
          if ((pbVar22 != (byte *)0x0) && ((pbVar22[2] & 1) != 0)) {
            param_1[0xba] = 1;
            FUN_ram_42033fd8(1,4,4,0x3c07c4c4);
          }
          FUN_ram_42040c8e(param_1,pbStack_68);
        }
        FUN_ram_42043106(&DAT_ram_3fcb4f74,*(ushort *)((int)param_1 + 0x2a) & 0x400);
        if (((byte)(*(char *)((int)param_1 + 0x32) - 2U) < 2) &&
           ((*(ushort *)(param_1 + 0xb) & 2) != 0)) {
          _DAT_ram_3fcb4f90 = _DAT_ram_3fcb4f90 | 0x100000;
        }
        else {
          _DAT_ram_3fcb4f90 = _DAT_ram_3fcb4f90 & 0xffefffff;
        }
        iVar8 = param_1[6];
        iVar7 = param_1[7];
        iVar6 = param_1[8];
        *(int **)(_DAT_ram_3fcb4f74 + 0xf00) = param_1;
        (*(code *)&SUB_ram_40011ed4)(iVar6,iVar8,iVar7);
        if (DAT_ram_3fcb512d == '\x0f') {
          bVar9 = 0;
          if (pbVar14 != (byte *)0x0) {
            bVar9 = pbVar14[1];
          }
          iVar6 = (**(code **)(_DAT_ram_3fcb50e8 + 0x60))
                            (pbVar14,bVar9,pbStack_64,uStack_60,0xf,
                             *(code **)(_DAT_ram_3fcb50e8 + 0x60));
          if (iVar6 != 0) {
            FUN_ram_42033fd8(1,4,1,0x3c07da00);
            return 0xffffffff;
          }
        }
        FUN_ram_42033fd8(1,0xc,4,0x3c07c4f4,6);
        FUN_ram_420392fa(6);
        FUN_ram_42040fac(&DAT_ram_3fcb4f74,5,param_4);
        *(undefined1 *)(param_1 + 0xed) = 0;
        return 0;
      }
      uVar10 = (uint)pbVar19[1];
      if ((int)(param_3 - (int)pbVar19) <= (int)(uVar10 + 1)) {
        return 0xffffffff;
      }
      bVar9 = *pbVar19;
      pbVar13 = pbVar14;
      pbVar15 = pbVar16;
      pbVar17 = pbVar18;
      pbVar20 = pbVar21;
      pbVar4 = local_70;
      pbVar5 = pbVar19;
      if (bVar9 != 0x4a) {
        pbVar5 = pbStack_68;
        if (bVar9 < 0x4b) {
          pbVar13 = pbVar19;
          if (bVar9 != 0x30) {
            if (bVar9 < 0x31) {
              pbVar13 = pbVar14;
              pbVar15 = pbVar19;
              if ((bVar9 != 1) && (pbVar15 = pbVar16, bVar9 == 0x2d)) {
LAB_ram_42042204:
                pbVar11 = pbVar19;
                pbVar13 = pbVar14;
                pbVar15 = pbVar16;
                pbVar20 = pbVar21;
              }
            }
            else {
              pbVar13 = pbVar14;
              pbVar17 = pbVar19;
              if ((bVar9 != 0x32) && (pbVar17 = pbVar18, bVar9 == 0x3d)) {
                pbVar12 = pbVar19;
              }
            }
          }
        }
        else if (bVar9 == 0xdd) {
          if ((uVar10 < 4) || (pbVar20 = pbVar19, *(int *)(pbVar19 + 2) != 0x2f25000)) {
            if ((_DAT_ram_3fcb51d8 == 0) || ((uVar10 < 4 || (*(int *)(pbVar19 + 2) != 0x734fe18))))
            {
              if ((*(uint *)(iVar6 + 300) & 0x10000000) == 0) {
                pbVar20 = pbVar21;
                if (3 < uVar10) {
                  if (*(uint *)(pbVar19 + 2) == 0xdd34fe18) {
                    if (_DAT_ram_3fcb500c != (code *)0x0) {
                      (*_DAT_ram_3fcb500c)
                                (4,param_2 + 10,pbVar19 + 7,pbVar19 + 10,uVar10 - 8 & 0xff,param_5);
                    }
                  }
                  else if (((*(uint *)(pbVar19 + 2) & 0xffffff) != 0x34fe18) &&
                          (_DAT_ram_3fcb5038 != (code *)0x0)) {
                    (*_DAT_ram_3fcb5038)(_DAT_ram_3fcb503c,4,param_2 + 10,pbVar19,param_5);
                  }
                }
              }
              else {
                pbVar20 = pbVar21;
                if ((3 < uVar10) &&
                   (((pbVar18 = pbVar11, *(int *)(pbVar19 + 2) == 0x334c9000 ||
                     (pbVar18 = pbVar12, *(int *)(pbVar19 + 2) == 0x344c9000)) &&
                    (pbVar18 == (byte *)0x0)))) goto LAB_ram_42042204;
              }
            }
            else {
              (*(code *)&SUB_ram_40012068)(param_1,pbVar19 + 7,0);
              iVar8 = (*(code *)&SUB_ram_40012078)(param_1);
              pbVar20 = pbVar21;
              if (iVar8 != 0) {
                (*(code *)&SUB_ram_4001207c)(param_1,0);
              }
            }
          }
        }
        else if (bVar9 < 0xde) {
          pbVar4 = pbVar19;
          if ((bVar9 != 0x5a) && (pbVar4 = local_70, bVar9 == 0x7f)) {
            pbVar22 = pbVar19;
          }
        }
        else if (bVar9 == 0xff) {
          if (uVar10 == 0) {
            FUN_ram_42033fd8(1,4,2,0x3c07ff18);
          }
          else if (pbVar19[2] == 0x20) {
            pbStack_64 = pbVar19;
            uStack_60 = uVar10;
          }
        }
      }
      pbStack_68 = pbVar5;
      local_70 = pbVar4;
      pbVar19 = pbVar19 + pbVar19[1] + 2;
      pbVar14 = pbVar13;
      pbVar16 = pbVar15;
      pbVar18 = pbVar17;
      pbVar21 = pbVar20;
    } while( true );
  }
  if (uVar10 == 0x1e) {
    iVar8 = thunk_FUN_ram_42043b0a(0x38,pbVar19,param_3 - (int)pbVar19);
    if ((((iVar8 != 0) && (iVar8 + 7U <= param_3)) && (*(char *)(iVar8 + 2) == '\x03')) &&
       (uVar3 = *(uint *)(iVar8 + 3), uVar3 != 0)) {
      if (uVar3 < 0x1389) {
        iVar7 = param_1[0xed];
        *(char *)(param_1 + 0xed) = (char)iVar7 + '\x01';
        if ((byte)((char)iVar7 + 1U) < 2) {
          FUN_ram_42033fd8(1,4,3,0x3c07e6ac,uVar3,uVar3 + 100);
          iVar7 = iVar6 + 0x54;
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar6 + 4);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar7);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar7);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar7,0x4203085e,0);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))(iVar7,(*(int *)(iVar8 + 3) + 100) * 0x400,0);
          return 0;
        }
        FUN_ram_42033fd8(1,4,1,0x3c07d954);
      }
      else {
        FUN_ram_42033fd8(1,4,1,0x3c07d8f8);
      }
      FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,0xd010);
      return 0;
    }
  }
  else if (uVar10 == 0x12) {
    FUN_ram_42033fd8(1,4,1,0x3c07d988,0x12);
    goto LAB_ram_42042138;
  }
  FUN_ram_42033fd8(1,4,1,0x3c07d9ec);
LAB_ram_42042138:
  FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,uVar10 << 8 | 0x10);
  iVar8 = FUN_ram_420399ec();
  if (iVar8 != 0) {
    iVar6 = iVar6 + 4;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar6);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar6);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar6,0x4202d67a,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar6,1000,0);
  }
  return 0xffffffff;
}

