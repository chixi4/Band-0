
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039f6b0(int param_1,int param_2,uint *param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 == 0) {
    iVar2 = param_4 * *(int *)(_DAT_ram_3fcdfdec + 0x3b0);
    goto LAB_ram_4039f734;
  }
  if (param_4 != 1) goto LAB_ram_4039f6de;
  if ((*_DAT_ram_3fcb7da8 >> 0xc & 0xfff) < 0x1f5) {
    iVar2 = FUN_ram_4039f30c(0,8,*_DAT_ram_3fcb7da8 >> 0xc & 0xfff);
    if (iVar2 == 0) {
      iVar2 = *(int *)(_DAT_ram_3fcdfdec + 0x3b0);
      goto LAB_ram_4039f734;
    }
  }
  else {
    iVar2 = *(int *)(_DAT_ram_3fcdfdec + 0x3b0);
LAB_ram_4039f734:
    iVar2 = FUN_ram_4039f30c(0,7,iVar2);
  }
  FUN_ram_40393cee(0xb);
  puVar8 = _DAT_ram_3fcb7da8;
  if (iVar2 != 0) {
    puVar7 = (uint *)_DAT_ram_3fcb7da8[1];
    uVar1 = (*(code *)&SUB_ram_40011d14)(puVar7,param_1 + 2);
    iVar5 = *(int *)(*(int *)(iVar2 + 4) + 4);
    uVar6 = uVar1 & 0xffff;
    bVar3 = true;
    if (param_3 == puVar8) {
      iVar5 = FUN_ram_4039c11e(iVar5,puVar7,0x2c);
      FUN_ram_4039c11e(iVar5 + 0x2c,param_3[1] + (uVar1 & 0xffff) + 0x2c,
                       ((*param_3 >> 0xc & 0xfff) - 0x2c) - (uVar1 & 0xffff));
      puVar8 = *(uint **)(iVar2 + 4);
      uVar1 = (*param_3 >> 0xc & 0xfff) - uVar6;
    }
    else {
      uVar1 = uVar6 + 0x2c & 0xffff;
      do {
        if (bVar3) {
          iVar5 = FUN_ram_4039c11e(iVar5,puVar8[1],0x2c);
          iVar4 = _DAT_ram_3fcdfdec;
          puVar7 = (uint *)puVar8[1];
          iVar5 = FUN_ram_4039c11e(iVar5 + 0x2c,(int)puVar7 + uVar1,
                                   *(int *)(_DAT_ram_3fcdfdec + 0x3b0) - uVar1);
          iVar4 = *(int *)(iVar4 + 0x3b0) - uVar1;
        }
        else {
          iVar5 = FUN_ram_4039c11e(iVar5,puVar8[1],*(undefined4 *)(_DAT_ram_3fcdfdec + 0x3b0));
          iVar4 = *(int *)(_DAT_ram_3fcdfdec + 0x3b0);
        }
        puVar8 = (uint *)puVar8[2];
        iVar5 = iVar5 + iVar4;
        bVar3 = false;
      } while (param_3 != puVar8);
      FUN_ram_4039c11e(iVar5,param_3[1],*param_3 >> 0xc & 0xfff);
      puVar8 = *(uint **)(iVar2 + 4);
      uVar1 = (*param_3 >> 0xc & 0xfff) +
              (*(int *)(_DAT_ram_3fcdfdec + 0x3b0) * (param_4 + -1) - uVar6);
    }
    *puVar8 = (uVar1 & 0xfff) << 0xc | *puVar8 & 0xff000fff;
    if (((DAT_ram_3fcb7dd4 != '\x01') || ((*puVar7 & 0x40000000) == 0)) && (uVar6 != 0)) {
      iVar5 = *(int *)(iVar2 + 0x10);
      (*(code *)&SUB_ram_40011e80)
                (_DAT_ram_3fcb7da8[1] + 0x2c,uVar6,iVar5,iVar5 + 0x30,
                 *(uint *)(iVar5 + 0x2c) & 0xfff,0);
    }
    (*(code *)&SUB_ram_40011ce0)(param_3,param_4);
    puVar8 = *(uint **)(iVar2 + 0x24);
    puVar8[1] = param_5;
    *(undefined1 *)(puVar8 + 2) = DAT_ram_3fcb7dd0;
    *(undefined1 *)((int)puVar8 + 9) = DAT_ram_3fcb7dd1;
    if (param_4 == 1) {
      uVar1 = *puVar8 & 0xfff | 0x100;
    }
    else {
      uVar1 = *puVar8 & 0xfff | 0x80;
    }
    if (param_2 != 0) {
      uVar1 = uVar1 | 0x10;
    }
    *puVar8 = *puVar8 & 0xfffff000 | uVar1;
    (*(code *)&LAB_ram_40011b48)(iVar2);
    return;
  }
  FUN_ram_40393cee(0xc);
LAB_ram_4039f6de:
  (*(code *)&SUB_ram_40011ce0)(param_3,param_4);
  return;
}

