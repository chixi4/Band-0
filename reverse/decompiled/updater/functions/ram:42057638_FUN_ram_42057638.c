
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42057638(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uStack_22;
  
  piVar2 = (int *)_DAT_ram_3fcb67ac;
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = piVar2[8];
    if ((iVar1 != 0) && (uVar4 = (uint)*(byte *)(iVar1 + 5), uVar4 != 0)) {
      if (*(int *)(iVar1 + 0x24) != 0) {
        iVar6 = *(int *)(iVar1 + 0x20) + 1;
        *(int *)(iVar1 + 0x20) = iVar6;
        if (*(int *)(iVar1 + 0x24) == iVar6) {
          FUN_ram_420574e6(piVar2);
          FUN_ram_42057258(piVar2);
          goto LAB_ram_4205768e;
        }
      }
      iVar6 = *(int *)(iVar1 + 0x1c);
      if (iVar6 != 0) {
        *(int *)(iVar1 + 0x1c) = iVar6 + -1;
        if (iVar6 == 1) {
          if ((10 < uVar4) || ((0x432U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_ram_4205768e;
          FUN_ram_420561aa(iVar1,4);
          iVar6 = FUN_ram_42056228(piVar2,iVar1,3,&uStack_22);
          if (iVar6 != 0) {
            iVar8 = *(int *)(iVar6 + 4);
            uVar4 = (uint)uStack_22;
            iVar7 = iVar8 + 0xf0;
            *(undefined1 *)(iVar7 + uVar4) = 0x39;
            *(undefined1 *)((uVar4 + 1 & 0xffff) + iVar7) = 2;
            iVar3 = FUN_ram_420561c0(uVar4 + 2 & 0xffff,iVar7,*(undefined2 *)(piVar2 + 0xc));
            *(undefined1 *)(iVar7 + iVar3) = 0x37;
            *(undefined1 *)((iVar3 + 1U & 0xffff) + iVar7) = 4;
            *(undefined1 *)((iVar3 + 2U & 0xffff) + iVar7) = 1;
            *(undefined1 *)((iVar3 + 3U & 0xffff) + iVar7) = 3;
            *(undefined1 *)((iVar3 + 4U & 0xffff) + iVar7) = 0x1c;
            *(undefined1 *)((iVar3 + 5U & 0xffff) + iVar7) = 6;
            uStack_22 = (ushort)((iVar3 + 6U) * 0x10000 >> 0x10);
            uStack_22 = FUN_ram_42056544(iVar3 + 6U & 0xffff,iVar7,piVar2[0xb]);
            FUN_ram_4205966a(piVar2,4,iVar8,&uStack_22);
            FUN_ram_42056380(uStack_22,iVar7,iVar6);
            FUN_ram_42055f92(_DAT_ram_3fcb6810,iVar6,&DAT_ram_3c0793d0,0x43,piVar2);
            FUN_ram_42051d02(iVar6);
          }
          if (*(char *)(iVar1 + 6) == -1) {
LAB_ram_420577ce:
            uVar4 = 10000;
          }
          else {
            bVar5 = *(char *)(iVar1 + 6) + 1;
            *(byte *)(iVar1 + 6) = bVar5;
            if (9 < bVar5) goto LAB_ram_420577ce;
            uVar4 = (uint)bVar5 * 0x3e80000 >> 0x10;
          }
          *(uint *)(iVar1 + 0xc) = (uVar4 + 499 & 0xffff) / 500;
          if (*(char *)(iVar1 + 8) == '\0') {
            FUN_ram_4205598a(500,0x42047918,piVar2);
            *(undefined1 *)(iVar1 + 8) = 1;
          }
          uVar4 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20);
          if (5 < uVar4) {
            *(uint *)(iVar1 + 0x1c) = uVar4 >> 1;
          }
          goto LAB_ram_4205768e;
        }
      }
      iVar6 = *(int *)(iVar1 + 0x18);
      if (iVar6 != 0) {
        *(int *)(iVar1 + 0x18) = iVar6 + -1;
        if (((iVar6 == 1) && (uVar4 < 0xb)) && ((0x422U >> (uVar4 & 0x1f) & 1) != 0)) {
          FUN_ram_4205733c(piVar2);
          uVar4 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x20);
          if (5 < uVar4) {
            *(uint *)(iVar1 + 0x18) = uVar4 >> 1;
          }
        }
      }
    }
LAB_ram_4205768e:
    piVar2 = (int *)*piVar2;
  } while( true );
}

