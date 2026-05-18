
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420854ac(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  
  iVar4 = _DAT_ram_3fcc4018;
  iVar8 = _DAT_ram_3fcc4014;
  piVar3 = _DAT_ram_3fcc3f78;
  pcVar5 = (char *)FUN_ram_42079324();
  if (param_1 == (int *)0x0) {
    uVar10 = 0xff;
    uVar11 = 0xff;
  }
  else {
    uVar10 = *(undefined1 *)((int)param_1 + 0xab);
    uVar11 = (undefined1)param_1[0x2b];
  }
  FUN_ram_4207a038(1,4,4,"00 0@0",param_1,piVar3,uVar10,uVar11,*pcVar5);
  if ((piVar3 == (int *)0x0) || (piVar3 != param_1)) {
    if (param_1 == (int *)0x0) {
      return 1;
    }
  }
  else if (*(char *)((int)piVar3 + 0xab) == *pcVar5) {
    _DAT_ram_3fcc3f84 = _DAT_ram_3fcc3f84 | 0x140;
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fccb0,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),5);
    *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 5;
    (*(code *)&SUB_ram_40011d48)();
    return 0;
  }
  thunk_EXT_FUN_ram_40011dd8(0,param_1 + 1);
  FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fccf0,5);
  FUN_ram_4207f554(5);
  iVar2 = _DAT_ram_3fcc4018;
  if ((((**(char **)(gp + -0xb4) == '\x03') && (DAT_ram_3fcc41a6 != '\0')) &&
      (DAT_ram_3fcc41a7 != '\x01')) &&
     (((*(char *)(_DAT_ram_3fcc4018 + 0x12a) != *(char *)((int)param_1 + 0xab) &&
       (*(char *)(_DAT_ram_3fcc4018 + 0x12a) != '\x0e')) &&
      (*(char *)((int)param_1 + 0xab) != '\x0e')))) {
    iVar6 = FUN_ram_42079406();
    iVar7 = FUN_ram_42079406(*(undefined1 *)((int)param_1 + 0xab));
    if (iVar6 == iVar7) {
      FUN_ram_4207a038(1,4,3,&DAT_ram_3c0fff74,*(undefined1 *)(iVar2 + 0x12a),
                       *(undefined1 *)((int)param_1 + 0xab));
      DAT_ram_3fcc41a7 = 1;
      DAT_ram_3fcc41a8 = *(byte *)(*(int *)(gp + -0xb4) + 0x50a);
      DAT_ram_3fcc41a4 = *(undefined1 *)((int)param_1 + 0xab);
      DAT_ram_3fcc41a5 = (undefined1)param_1[0x2b];
      _DAT_ram_3fcc3fa8 = param_1;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc3060);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc3060);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcc3060,0x4207529e,0);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
                (0x3fcc3060,(DAT_ram_3fcc41a8 + 1) * (uint)*(ushort *)(param_1 + 10),0);
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x4d) = 4;
  iVar2 = param_1[0x2b];
  iVar6 = *param_1;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(char *)(iVar6 + 299) = (char)iVar2;
  *(undefined1 *)(iVar6 + 0x12a) = *(undefined1 *)((int)param_1 + 0xab);
  if ((iVar8 == 0) || (iVar6 != iVar8)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0ff040,"phone farther away first.",0x4b5);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar6 = (int)param_1 + 0xab;
  iVar8 = iVar6;
  if (((iVar4 != 0) && (cVar1 = *(char *)((int)param_1 + 0xab), cVar1 == *(char *)(iVar4 + 0x12a)))
     && ((char)iVar2 == '\0')) {
    if (*(char *)(iVar4 + 299) == '\x01') {
      bVar9 = cVar1 - 1;
    }
    else {
      if (*(char *)(iVar4 + 299) != '\x02') goto LAB_ram_42085722;
      bVar9 = cVar1 - 5;
    }
    if (bVar9 < 9) {
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcd0c);
      iVar8 = iVar4 + 0x12a;
    }
  }
LAB_ram_42085722:
  FUN_ram_4207c908(iVar8);
  _DAT_ram_3fcc3f80 = _DAT_ram_6004d000;
  if (*(char *)((int)param_1 + 0xab) == *pcVar5) {
    FUN_ram_420852c8(param_1,0);
  }
  else {
    iVar8 = FUN_ram_420792d2(3,0x420752c8,param_1);
    if (iVar8 != 0) {
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcd44);
      return 1;
    }
    FUN_ram_42079886(iVar6,0,0,0x420752c8,0,param_1);
  }
  return 2;
}

