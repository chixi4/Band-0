
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205a2cc(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 uStack_22;
  
  piVar2 = (int *)_DAT_ram_3fcc52d8;
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = piVar2[8];
    if ((iVar1 != 0) && (uVar5 = (uint)*(byte *)(iVar1 + 5), uVar5 != 0)) {
      if (*(int *)(iVar1 + 0x24) != 0) {
        iVar7 = *(int *)(iVar1 + 0x20) + 1;
        *(int *)(iVar1 + 0x20) = iVar7;
        if (*(int *)(iVar1 + 0x24) == iVar7) {
          FUN_ram_4205a190(piVar2);
          FUN_ram_42059efc(piVar2);
          goto LAB_ram_4205a322;
        }
      }
      iVar7 = *(int *)(iVar1 + 0x1c);
      if (iVar7 != 0) {
        *(int *)(iVar1 + 0x1c) = iVar7 + -1;
        if (iVar7 == 1) {
          if ((10 < uVar5) || ((0x432U >> (uVar5 & 0x1f) & 1) == 0)) goto LAB_ram_4205a322;
          FUN_ram_42058e08(iVar1,4);
          iVar7 = FUN_ram_420591cc(piVar2,iVar1,3,&uStack_22);
          if (iVar7 != 0) {
            iVar9 = *(int *)(iVar7 + 4);
            iVar8 = iVar9 + 0xf0;
            uVar3 = FUN_ram_42058e58(uStack_22,iVar8,0x39,2);
            uStack_22 = (undefined2)uVar3;
            uVar3 = FUN_ram_42058e1e(uVar3,iVar8,*(undefined2 *)(piVar2 + 0xc));
            uStack_22 = (undefined2)uVar3;
            uVar5 = FUN_ram_42058e58(uVar3,iVar8,0x37,4);
            uStack_22 = (undefined2)uVar5;
            iVar10 = 0;
            do {
              if (0x44 < (uVar5 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4039bf1e();
              }
              uVar4 = (uVar5 & 0xffff) + 1;
              *(undefined1 *)(iVar9 + uVar5 + 0xf0) = (&DAT_ram_3c0f7588)[iVar10];
              uStack_22 = (undefined2)(uVar4 * 0x10000 >> 0x10);
              iVar10 = iVar10 + 1;
              uVar5 = uVar5 + 1;
            } while (iVar10 != 4);
            uStack_22 = FUN_ram_42059468(uVar4 & 0xffff,iVar8,piVar2[0xb]);
            FUN_ram_4205c572(piVar2,4,iVar9,&uStack_22);
            FUN_ram_42058eee(uStack_22,iVar8,iVar7);
            FUN_ram_42058bf0(_DAT_ram_3fcc5340,iVar7,&DAT_ram_3c0f758c,0x43,piVar2);
            FUN_ram_42053ac4(iVar7);
          }
          if (*(char *)(iVar1 + 6) == -1) {
LAB_ram_4205a444:
            uVar5 = 10000;
          }
          else {
            bVar6 = *(char *)(iVar1 + 6) + 1;
            *(byte *)(iVar1 + 6) = bVar6;
            if (9 < bVar6) goto LAB_ram_4205a444;
            uVar5 = (uint)bVar6 * 0x3e80000 >> 0x10;
          }
          *(uint *)(iVar1 + 0xc) = (uVar5 + 499 & 0xffff) / 500;
          if (*(char *)(iVar1 + 8) == '\0') {
            FUN_ram_420585b0(500,0x4204a58e,piVar2);
            *(undefined1 *)(iVar1 + 8) = 1;
          }
          uVar5 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20);
          if (5 < uVar5) {
            *(uint *)(iVar1 + 0x1c) = uVar5 >> 1;
          }
          goto LAB_ram_4205a322;
        }
      }
      iVar7 = *(int *)(iVar1 + 0x18);
      if (iVar7 != 0) {
        *(int *)(iVar1 + 0x18) = iVar7 + -1;
        if (((iVar7 == 1) && (uVar5 < 0xb)) && ((0x422U >> (uVar5 & 0x1f) & 1) != 0)) {
          FUN_ram_42059ff2(piVar2);
          uVar5 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x20);
          if (5 < uVar5) {
            *(uint *)(iVar1 + 0x18) = uVar5 >> 1;
          }
        }
      }
    }
LAB_ram_4205a322:
    piVar2 = (int *)*piVar2;
  } while( true );
}

