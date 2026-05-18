
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039f998(uint *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  uint *puVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  
  puVar4 = *(uint **)(_DAT_ram_3fcb7da8 + 4);
  *(byte *)((int)puVar4 + 10) = DAT_ram_3fcb7dd1 << 4 | DAT_ram_3fcb7dd0 & 0xf;
  uVar7 = (*(code *)&SUB_ram_40011d14)(puVar4);
  if ((uVar7 & 0xffff) == 0) {
    cVar1 = *(char *)((int)puVar4 + 0x2f);
  }
  else {
    cVar1 = *(char *)((int)puVar4 + (uVar7 & 0xffff) + 0x2f);
  }
  if ((cVar1 != '\0') && (cVar1 != -0xb)) {
    if (((((byte)puVar4[2] == 0x41) || (((byte)puVar4[2] & 0xf8) == 0x78)) &&
        (DAT_ram_3fcb7dd4 != '\0')) && ((_DAT_ram_3fcb7dd8 & 8) != 0)) {
      if ((*puVar4 & 0xc000) == 0x4000) {
        puVar4[0xb] = puVar4[0xb] & 0xfffff000 | (puVar4[1] & 0xfffff) >> 8;
      }
      (*(code *)&SUB_ram_40011e64)(param_1,param_2 & 0xff);
    }
    goto LAB_ram_4039fa10;
  }
  uVar10 = puVar4[1];
  puVar12 = (ushort *)((uVar7 & 0xffff) + 0x30 + (int)puVar4);
  uVar6 = *puVar12;
  uVar7 = puVar4[3];
  if (DAT_ram_3fcb7dd4 == '\x01') {
    if ((*puVar4 & 0x40000000) != 0) {
      (*(code *)&SUB_ram_40011e64)(param_1,param_2 & 0xff);
    }
  }
  uVar3 = *puVar12;
  uVar11 = *puVar4 & 0x30000000;
  if ((uVar10 & 0x8000000) == 0) {
    if (uVar11 == 0) {
      bVar5 = false;
      uVar11 = 1;
    }
    else {
      if ((uVar6 & 0xf) == 4) {
        _DAT_ram_3fcc4720 = _DAT_ram_3fcc4720 + 1;
        uVar9 = uVar6 & 0xf0;
        if (uVar9 != 0xb0) {
          if (uVar9 < 0xb1) {
            if ((uVar9 == 0xa0) || ((uVar6 & 0xe0) == 0x80)) {
              bVar5 = (uVar3 & 0x400) == 0;
              uVar11 = 0;
              goto LAB_ram_4039fafe;
            }
          }
          else if ((uVar6 & 0xe0) == 0xc0) goto LAB_ram_4039fc7c;
          uVar11 = (*(code *)&SUB_ram_40011e44)(uVar6,param_1,param_2);
          bVar5 = false;
          goto LAB_ram_4039fc68;
        }
LAB_ram_4039fc7c:
        bVar5 = false;
      }
      else if ((uVar6 & 0xf) == 8) {
        bVar5 = true;
        if ((uVar6 & 0x70) != 0x40) {
          bVar5 = false;
          iVar8 = (**(code **)(_DAT_ram_3fcdfdd8 + 4))();
          if (iVar8 == 0) {
            bVar5 = (bool)((byte)puVar12[2] & 1);
          }
        }
        _DAT_ram_3fcc4718 = _DAT_ram_3fcc4718 + 1;
      }
      else {
        if ((uVar6 & 0xf) != 0) {
          bVar5 = false;
          uVar11 = 1;
          goto LAB_ram_4039fafe;
        }
        uVar6 = uVar6 & 0xf0;
        if (uVar6 == 0x40) {
          *(byte *)((int)puVar4 + 3) = *(byte *)((int)puVar4 + 3) & 0xcf | 0x20;
          iVar8 = (*(code *)&SUB_ram_40011b08)(0);
          if ((iVar8 != 0) && (_DAT_ram_3fcdfd48 != (code *)0x0)) {
            (*_DAT_ram_3fcdfd48)(puVar12,puVar4[0xb] & 0xfff,(int)(char)*puVar4);
          }
        }
        else if (uVar6 == 0x80) {
          *(byte *)((int)puVar4 + 3) = *(byte *)((int)puVar4 + 3) & 0xcf | 0x10;
        }
        else if ((uVar6 == 0xd0) && ((_DAT_ram_3fcc3018 & 4) != 0)) {
          FUN_ram_4039f558(puVar4,puVar12);
        }
        bVar5 = true;
        _DAT_ram_3fcc471c = _DAT_ram_3fcc471c + 1;
      }
      uVar11 = 0;
    }
LAB_ram_4039fc68:
    if ((uVar3 & 0x400) != 0) {
      bVar5 = false;
    }
LAB_ram_4039fafe:
    iVar8 = (*(code *)&SUB_ram_40011b08)(1);
    if (((iVar8 == 0) || ((*puVar4 & 0x20000000) == 0)) &&
       ((iVar8 = (*(code *)&SUB_ram_40011b08)(0), iVar8 == 0 || ((*puVar4 & 0x10000000) == 0))))
    goto LAB_ram_4039fa10;
  }
  else {
    uVar11 = (uint)(uVar11 == 0);
    bVar2 = false;
    if ((DAT_ram_3fcb7dd4 == '\x01') && ((*puVar4 & 0x40000000) != 0)) {
      bVar2 = true;
      uVar11 = 0;
    }
    _DAT_ram_3fcc4714 = _DAT_ram_3fcc4714 + 1;
    bVar5 = false;
    if (!bVar2) goto LAB_ram_4039fafe;
    bVar5 = false;
  }
  if (uVar11 == 0) {
    if ((*param_1 >> 0xc & 0xfff) == 0) {
      FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff7a0,"are less, feel more.",&DAT_ram_3c0facb4,0x904);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_ram_4039f6b0(bVar5,(uVar10 & 0x8000000) != 0,param_1,param_2,uVar7);
    return;
  }
LAB_ram_4039fa10:
  (*(code *)&SUB_ram_40011ce0)(param_1,param_2);
  return;
}

