
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208dd84(uint param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (DAT_ram_3fcc4261 == '\x01') {
    if (param_1 == 0) {
      puVar4 = &DAT_ram_3c102180;
LAB_ram_4208dda6:
      FUN_ram_4207a038(1,8,2,puVar4);
      return 0xffffffff;
    }
    if (param_2 != 0) {
      FUN_ram_4207a038(1,8,2,&DAT_ram_3c1021c8);
      param_2 = 0;
    }
LAB_ram_4208ddd0:
    if ((param_1 & 0xffff8001) != 0) {
      puVar4 = &DAT_ram_3c0ff490;
      param_2 = param_1;
      goto LAB_ram_4208dde2;
    }
    if (param_2 == 0) goto LAB_ram_4208de40;
  }
  else {
    if (DAT_ram_3fcc4261 != '\x02') {
      if (param_1 == 0) {
        param_1 = 0x7ffe;
      }
      if (param_2 == 0) {
        param_2 = 0x1ffffffe;
      }
      goto LAB_ram_4208ddd0;
    }
    if (param_2 == 0) {
      puVar4 = &DAT_ram_3c1021fc;
      goto LAB_ram_4208dda6;
    }
    if (param_1 != 0) {
      FUN_ram_4207a038(1,8,2,&DAT_ram_3c102244);
      param_1 = 0;
    }
  }
  if ((param_2 & 0xe0000001) == 0) {
LAB_ram_4208de40:
    iVar1 = *(int *)(_DAT_ram_3fcdfb20 + 0x4c);
    param_1 = param_1 & 0xfffe;
    param_2 = param_2 & 0xfffffffe;
    uVar5 = 1;
    uVar6 = 0;
    do {
      if (param_1 == 0) break;
      if ((param_1 >> (uVar5 & 0x1f) & 1) != 0) {
        *(char *)(uVar6 + iVar1) = (char)uVar5;
        param_1 = param_1 & ~(1 << (uVar5 & 0x1f));
        uVar6 = uVar6 + 1 & 0xff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0xf);
    cVar3 = '$';
    uVar5 = 0;
    do {
      if (param_2 == 0) break;
      uVar7 = uVar5 + 1;
      if ((param_2 >> (uVar7 & 0x1f) & 1) != 0) {
        cVar2 = cVar3;
        if (7 < uVar5) {
          if (((uVar5 & 0xff) - 8 & 0xff) < 0xc) {
            cVar2 = cVar3 + ' ';
          }
          else {
            cVar2 = cVar3 + '!';
          }
        }
        *(char *)(uVar6 + iVar1) = cVar2;
        param_2 = param_2 & ~(1 << (uVar7 & 0x1f));
        uVar6 = uVar6 + 1 & 0xff;
      }
      cVar3 = cVar3 + '\x04';
      uVar5 = uVar7;
    } while (uVar7 != 0x1c);
    *(char *)(_DAT_ram_3fcdfb20 + 0x48) = (char)uVar6;
    return 0;
  }
  puVar4 = &DAT_ram_3c0ff4c0;
LAB_ram_4208dde2:
  FUN_ram_4207a038(1,4,1,puVar4,param_2);
  return 0xffffffff;
}

