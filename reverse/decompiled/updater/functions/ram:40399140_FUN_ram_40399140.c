
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40399140(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uStack_48;
  undefined4 *apuStack_44 [4];
  
  uStack_48 = 0;
  iVar3 = (*(code *)&SUB_ram_40011f94)();
  if ((_DAT_ram_3fcb50d8 != 0) && (iVar3 != 0)) {
    (*(code *)&SUB_ram_40011fc0)();
  }
  do {
    while( true ) {
      while( true ) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
        puVar2 = _DAT_ram_3fcb36d0;
        if ((_DAT_ram_3fcb36d0 != (undefined4 *)0x0) &&
           (_DAT_ram_3fcb36d0 = (undefined4 *)_DAT_ram_3fcb36d0[8],
           _DAT_ram_3fcb36d0 == (undefined4 *)0x0)) {
          _DAT_ram_3fcb36d4 = (undefined4 *)&DAT_ram_3fcb36d0;
        }
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
        if (puVar2 == (undefined4 *)0x0) {
          return 0;
        }
        uVar8 = *(uint *)(puVar2[9] + 0x10) >> 0x13 & 1;
        iVar4 = (*(code *)&SUB_ram_40011d24)();
        if (iVar4 != 0) {
          FUN_ram_42033fd8(1,0x40,5,0x3c07ef04,*puVar2,
                           (uint)*(ushort *)((int)puVar2 + 0x16) + (uint)*(ushort *)(puVar2 + 5));
          iVar4 = (*(code *)&SUB_ram_40011fec)(uVar8,*(undefined4 *)(puVar2[1] + 4),&uStack_48);
          uVar6 = *(ushort *)((int)puVar2 + 0x16);
          uVar1 = *(ushort *)(puVar2 + 5);
          iVar9 = puVar2[1];
          if ((iVar4 == 0) || (iVar4 = FUN_ram_42031cd8(), iVar4 == 0)) {
            apuStack_44[0] =
                 (undefined4 *)
                 (*(code *)&SUB_ram_40011fdc)
                           (*(undefined4 *)(iVar9 + 4),1,(uint)uVar6 + (uint)uVar1);
          }
          else {
            apuStack_44[0] =
                 (undefined4 *)
                 FUN_ram_42031d0a(*(undefined4 *)(iVar9 + 4),(uint)uVar1 + (uint)uVar6);
          }
          if (apuStack_44[0] == (undefined4 *)0x0) {
            (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
            puVar2[8] = _DAT_ram_3fcb36d0;
            if (_DAT_ram_3fcb36d0 == (undefined4 *)0x0) {
              _DAT_ram_3fcb36d4 = puVar2 + 8;
            }
            _DAT_ram_3fcb36d0 = puVar2;
            (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
            return 0x101;
          }
          (*(code *)&SUB_ram_40011fe4)(apuStack_44[0],puVar2);
          (*(code *)&SUB_ram_40011fe8)(puVar2);
          puVar2 = apuStack_44[0];
          if (_DAT_ram_3fcdfd24 != (code *)0x0) {
            (*_DAT_ram_3fcdfd24)(apuStack_44);
            puVar2 = apuStack_44[0];
          }
        }
        apuStack_44[0] = puVar2;
        if ((*(uint *)apuStack_44[0][9] & 0x4000) == 0) break;
        (*(code *)&SUB_ram_400120f4)(uVar8);
      }
      iVar9 = *(int *)(apuStack_44[0][1] + 4);
      iVar4 = (*(code *)&SUB_ram_40011fec)(uVar8,iVar9,&uStack_48);
      if (iVar4 != 0) break;
      (*(code *)&SUB_ram_40011fa4)(apuStack_44[0]);
    }
    puVar5 = (uint *)apuStack_44[0][9];
    if (((*puVar5 & 0x8000) == 0) &&
       (((uVar6 = *(ushort *)(iVar9 + 0xc) >> 8 | *(ushort *)(iVar9 + 0xc) << 8, uVar6 == 0x888e ||
         (uVar6 == 0x88b4)) && (*puVar5 = *puVar5 | 4, uVar8 == 0)))) {
      if (uVar6 == 0x88b4) {
        if (*(char *)(iVar9 + 0x11) != '\f') goto LAB_ram_40399356;
        uVar7 = 0x4000;
      }
      else {
        uVar7 = 8;
      }
      puVar5[5] = uVar7;
    }
LAB_ram_40399356:
    uVar7 = puVar5[1] & 0xf;
    if (uVar7 == 0xf) {
      uVar7 = FUN_ram_42031f60(iVar4,apuStack_44[0],0xf);
    }
    apuStack_44[0] = (undefined4 *)FUN_ram_40398d84(iVar4,apuStack_44[0],uVar7);
    if (apuStack_44[0] != (undefined4 *)0x0) {
      if (((*(uint *)(iVar4 + 0xc) & 0x10) == 0) || (uVar8 == 0)) {
        if (iVar3 == 0) {
          apuStack_44[0][8] = 0;
          *_DAT_ram_3fcb50dc = (int)apuStack_44[0];
          _DAT_ram_3fcb50dc = apuStack_44[0] + 8;
        }
        else {
          (*(code *)&SUB_ram_40011c48)(apuStack_44[0],1);
        }
      }
      else {
        FUN_ram_42022e9a(iVar4,apuStack_44[0]);
        _DAT_ram_3fcb3978 = _DAT_ram_3fcb3978 + 1;
      }
    }
  } while( true );
}

