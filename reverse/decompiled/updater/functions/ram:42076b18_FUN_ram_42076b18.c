
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42076b18(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                     undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar9 = (param_3 + -1) * 0x1000000 >> 0x18;
  iVar7 = 0;
  do {
    if ((char)iVar9 < '\0') {
      (*(code *)&LAB_ram_40012438)(1);
      return;
    }
    uVar2 = (uint)*(byte *)(param_2 + iVar9);
    if (iVar9 < param_3 + -1) {
      iVar7 = (int)(((iVar7 + (uint)((byte *)(param_2 + iVar9))[1]) - uVar2) * 0x10000) >> 0x10;
    }
    iVar10 = 0;
    uVar8 = 2;
    do {
      iVar6 = (param_7 - (iVar7 * -0x1000000 >> 0x18)) * 0x10000 >> 0x10;
      iVar1 = iVar6;
      if (iVar6 < 0) {
        iVar1 = 0;
      }
      sVar4 = (short)iVar1;
      if (100 < sVar4) {
        sVar4 = 100;
      }
      uVar5 = (uint)sVar4;
      (*(code *)&SUB_ram_40012434)(1,param_1,uVar5 & 0xff,0,0,0);
      iVar1 = (**(code **)(_DAT_ram_3fcb640c + 0xc0))(param_6);
      iVar3 = (**(code **)(_DAT_ram_3fcb640c + 0xc0))(param_6);
      iVar1 = ((iVar1 + iVar3) * 0x10000 >> 0x10) + 4 >> 3;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      uVar11 = iVar1 - uVar2;
      if ((int)uVar11 < 0x19) {
        if ((int)uVar11 < -0x18) {
          uVar11 = 0xffffffe8;
          goto LAB_ram_42076cf2;
        }
        if (param_8 != 0) goto LAB_ram_42076c44;
LAB_ram_42076c5c:
        if (uVar11 == 0) {
          if (iVar10 != 0) break;
        }
        else if ((uVar11 == 0xffffffff) && (uVar8 == 1)) break;
      }
      else {
        uVar11 = 0x18;
LAB_ram_42076cf2:
        if (param_8 != 0) {
LAB_ram_42076c44:
          FUN_ram_42076e98(0x3fcb1150,iVar10,iVar1,uVar2,uVar11,iVar7,uVar5);
          goto LAB_ram_42076c5c;
        }
      }
      if (uVar8 == 0) break;
      if (iVar6 < 1) {
        if ((int)uVar11 < 0) {
          uVar5 = 0;
          break;
        }
      }
      else if ((99 < iVar6) && (0 < (int)uVar11)) {
        uVar5 = 100;
        break;
      }
      sVar4 = (short)uVar11 + (short)iVar7;
      if (4 < ((uVar11 & 0xffff) + 2 & 0xffff)) {
        sVar4 = sVar4 - (short)((int)uVar11 >> 2);
      }
      iVar10 = iVar10 + 1;
      iVar7 = (int)sVar4;
      uVar8 = uVar11;
    } while (iVar10 != 10);
    iVar10 = (uVar5 - param_4) * 0x1000000;
    if (iVar10 >> 0x18 < -0x18) {
      *(undefined1 *)(param_5 + iVar9) = 0xe8;
    }
    else {
      *(undefined1 *)(param_5 + iVar9) = (char)((uint)iVar10 >> 0x18);
    }
    iVar9 = iVar9 + -1;
  } while( true );
}

