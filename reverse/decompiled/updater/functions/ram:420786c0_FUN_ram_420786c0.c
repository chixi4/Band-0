
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420786c0(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  bVar1 = false;
  uVar8 = 0;
  uVar9 = 0;
  uVar2 = 0xff;
LAB_ram_420786fa:
  do {
    while( true ) {
      iVar3 = (*(code *)&SUB_ram_40011d18)();
      if (iVar3 == 0) {
        if (bVar1) {
          (*(code *)&SUB_ram_40011c60)();
        }
        thunk_FUN_ram_4204878a(uVar9,0,uVar8);
        return;
      }
      (*(code *)&SUB_ram_40011d3c)(iVar3,0);
      FUN_ram_4207863e(iVar3);
      puVar6 = *(uint **)(iVar3 + 0x24);
      uVar7 = *puVar6;
      if ((uVar7 & 0x2000) == 0) break;
      iVar4 = *(int *)(iVar3 + 0x1c);
      if ((iVar4 != 0) && (-1 < *(char *)(iVar4 + 0xb))) {
        uVar2 = puVar6[4] >> 0x13 & 1;
        if (uVar2 == 0) {
          uVar8 = 1;
          if (*(char *)((int)puVar6 + 0x13) == '\x01') {
            uVar9 = 1;
            uVar8 = 1;
          }
        }
        if ((uVar7 & 0x80008) == 8) {
          FUN_ram_42079188(iVar4,iVar3);
        }
      }
      if (_DAT_ram_3fcdfd44 != (code *)0x0) {
        iVar4 = *(int *)(*(int *)(iVar3 + 4) + 4);
        if ((**(uint **)(iVar3 + 0x24) & 0x40000) != 0) {
          iVar4 = iVar4 + 8;
        }
        (*_DAT_ram_3fcdfd44)
                  (uVar2,iVar4,iVar3 + 0x16,
                   *(char *)((int)*(uint **)(iVar3 + 0x24) + 0x13) == '\x01');
      }
LAB_ram_420787a0:
      if (*(char *)(iVar3 + 0x1a) == '\x01') {
        bVar1 = true;
      }
      FUN_ram_4039bab0(iVar3);
    }
    if ((uVar7 & 0x800000) != 0) {
      puVar5 = *(uint **)(iVar3 + 8);
      *(short *)(iVar3 + 0x16) = *(short *)(iVar3 + 0x16) + -4;
      *puVar5 = ((*puVar5 >> 0xc & 0xfff) - 4 & 0xfff) << 0xc | *puVar5 & 0xff000fff;
      *puVar6 = uVar7 & 0xff7fffff;
      goto LAB_ram_420786fa;
    }
    if (*(char *)(iVar3 + 0x1a) != '\x05') goto LAB_ram_420787a0;
    FUN_ram_42033fd8(6,0x40,3,0x3c07ecc0);
  } while( true );
}

