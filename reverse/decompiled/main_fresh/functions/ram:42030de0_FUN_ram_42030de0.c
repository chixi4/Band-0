
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42030de0(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  
  cVar1 = *(char *)(param_1 + 0xc);
  if ((cVar1 == '\x02') ||
     (((*(byte *)(param_1 + 8) & 1) == 0 && ((cVar1 == '\0' || (cVar1 == '\x03')))))) {
LAB_ram_42030e82:
    FUN_ram_4202791e(param_1,&uStack_42,auStack_40,&uStack_41,auStack_38);
    iVar8 = param_1 + 0x5e;
    iVar4 = FUN_ram_4202b268(param_1 + 0x162,param_1 + 0x3e,param_1 + 0x4e,uStack_42,auStack_40,
                             uStack_41,auStack_38,param_1 + 0x152,iVar8);
    if (iVar4 == 0) {
      (*(code *)&SUB_ram_40010488)
                ((uint)*(byte *)(param_1 + 0xf) + iVar8,0,0x10 - (uint)*(byte *)(param_1 + 0xf));
      FUN_ram_4039c11e(param_1 + 0x8a,iVar8,0x10);
      uVar6 = *(undefined1 *)(param_1 + 0xf);
      *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xfc | 3;
      *(undefined2 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined1 *)(param_1 + 0x89) = uVar6;
      FUN_ram_4039c11e(param_1 + 0xda,iVar8,0x10);
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfc | 3;
      bVar7 = *(byte *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined1 *)(param_1 + 0xd9) = uVar6;
      if ((bVar7 & 1) == 0) {
        if ((*(char *)(param_1 + 0xc) == '\x02') && ((bVar7 & 2) == 0)) {
          *(byte *)(param_1 + 8) = bVar7 | 4;
          return;
        }
      }
      else {
        iVar4 = FUN_ram_420309c2(param_1);
        if (iVar4 != 0) {
          *param_2 = iVar4;
          *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
          *(undefined1 *)(param_2 + 1) = 8;
          return;
        }
        iVar4 = FUN_ram_42030b16(param_1,&uStack_43);
        if (iVar4 != 0) {
          *param_2 = 3;
          goto LAB_ram_42030e40;
        }
        uVar5 = FUN_ram_42028026(uStack_43);
        if ((uVar5 == *(byte *)(param_1 + 0xd)) && ((*(byte *)(param_1 + 8) & 2) == 0)) {
          *(undefined1 *)(param_2 + 2) = uStack_43;
          FUN_ram_420309f6(param_1,param_2);
          return;
        }
      }
      bVar7 = *(byte *)(param_2 + 5) | 1;
      goto LAB_ram_42030e6a;
    }
LAB_ram_42030e3e:
    *param_2 = iVar4;
LAB_ram_42030e40:
    uVar6 = 8;
  }
  else {
    FUN_ram_4202d766(param_1 + 0x1e,0x10);
    uVar2 = _DAT_ram_3fcb6bb4;
    uVar3 = FUN_ram_420283c8(param_1);
    iVar4 = FUN_ram_4202b1ca(param_1 + 0x112,uVar2,uVar3,*(undefined1 *)(param_1 + 0x111),auStack_30
                            );
    if (iVar4 != 0) goto LAB_ram_42030e3e;
    iVar4 = FUN_ram_4039c0e0(param_1 + 0x2e,auStack_30,0x10);
    if (iVar4 == 0) goto LAB_ram_42030e82;
    *param_2 = 0x404;
    uVar6 = 4;
  }
  *(undefined1 *)(param_2 + 1) = uVar6;
  bVar7 = *(byte *)(param_2 + 5) | 2;
LAB_ram_42030e6a:
  *(byte *)(param_2 + 5) = bVar7;
  return;
}

