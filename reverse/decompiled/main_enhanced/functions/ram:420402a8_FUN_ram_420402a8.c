
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420402a8(uint *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 == 3) {
    *(short *)((int)param_2 + 6) = (short)param_4;
    *(short *)(param_2 + 4) = (short)param_4;
  }
  iVar2 = _DAT_ram_3fcdfecc;
  *(char *)((int)param_2 + 0x1b) = (char)param_3;
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined2 *)(param_2 + 7) = 0;
  (**(code **)(iVar2 + 0xa04))(0x7027,param_3,param_4,(char)param_1[0x46],*(code **)(iVar2 + 0xa04))
  ;
  puVar5 = param_2 + 4;
  if (2 < (byte)param_1[0x46]) {
    cVar1 = *(char *)((int)param_1 + 0xb);
    if (((*(byte *)((int)param_2 + 0x1b) & 3) != 3) || (0xf < (*(byte *)*param_2 - 2 & 0xff)))
    goto LAB_ram_42040314;
    uVar3 = 1 << (*(byte *)*param_2 - 2 & 0x1f);
    if ((uVar3 & 0x8819) == 0) {
      if ((uVar3 & 6) != 0) {
        if ((byte)param_1[0x46] != 6) goto LAB_ram_42040314;
        goto LAB_ram_420403d8;
      }
      if (((uVar3 & 0x200) == 0) || (cVar1 != '\x01')) {
LAB_ram_42040314:
        if (cVar1 == '\x02') goto LAB_ram_4204036c;
        goto LAB_ram_4204031a;
      }
LAB_ram_420403de:
      (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
    }
    else {
LAB_ram_420403d8:
      if (((cVar1 != '\x02') || (*(short *)((int)param_1 + 0x86) == 0)) || ((*param_1 & 0x10) == 0))
      goto LAB_ram_420403de;
      *param_1 = *param_1 & 0xffffffef;
      (**(code **)(_DAT_ram_3fcdfed0 + 0x5d4))(param_1);
      (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
    }
    uVar3 = param_1[0x39];
    param_2[5] = uVar3;
    if (uVar3 == 0) {
      param_1[0x3a] = (uint)(param_2 + 5);
      param_1[0x39] = (uint)puVar5;
    }
    else {
      param_1[0x39] = (uint)puVar5;
    }
    goto LAB_ram_4204033a;
  }
  if (*(char *)((int)param_1 + 0xb) == '\x02') {
LAB_ram_4204036c:
    if ((*(short *)((int)param_1 + 0x86) == 0) || ((*param_1 & 0x10) == 0)) goto LAB_ram_4204031a;
    *param_1 = *param_1 & 0xffffffef;
    (**(code **)(_DAT_ram_3fcdfed0 + 0x5d4))(param_1);
    (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  }
  else {
LAB_ram_4204031a:
    (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  }
  puVar4 = (undefined4 *)param_1[0x3a];
  param_2[5] = 0;
  *puVar4 = puVar5;
  param_1[0x3a] = (uint)(param_2 + 5);
LAB_ram_4204033a:
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))();
                    /* WARNING: Could not recover jumptable at 0x42040360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0xa24))(param_1);
  return;
}

