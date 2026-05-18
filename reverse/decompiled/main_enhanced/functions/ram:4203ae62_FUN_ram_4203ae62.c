
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203ae62(int param_1,undefined4 *param_2,int param_3,int param_4,uint param_5,
                     int param_6)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  
  pcVar5 = *(char **)(param_6 + 0xc);
  if ((((param_5 & 0xc0) != 0xc0) || ((short)param_5 < 0)) || (*pcVar5 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x4203af96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x4012,param_5);
    return;
  }
  pbVar6 = (byte *)*param_2;
  (**(code **)(_DAT_ram_3fcdfecc + 700))
            (param_1,pbVar6,param_4,(int)(short)param_5,param_5,*(code **)(_DAT_ram_3fcdfecc + 700))
  ;
  (**(code **)(_DAT_ram_3fcdfecc + 0x314))(param_3,param_4);
  iVar1 = _DAT_ram_3fcdfecc;
  if (*(char *)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0xe) != '\0') {
    (**(code **)(_DAT_ram_3fcdfecc + 0x2f4))(param_4);
    iVar1 = _DAT_ram_3fcdfecc;
  }
  do {
    if (pcVar5[3] == '\0') {
LAB_ram_4203af0e:
      (**(code **)(iVar1 + 0x318))
                (param_1,*(undefined4 *)(param_4 + 0x14),*(undefined1 *)(param_4 + 0x10),
                 *(undefined4 *)(param_4 + 0xc),*(undefined1 *)(param_4 + 8),param_2,param_3,pcVar5)
      ;
    }
    else {
      iVar1 = (**(code **)(iVar1 + 0x114))();
      if ((*(byte *)(iVar1 + 0x5d) & 1) == 0) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x2a4))
                          (*(undefined1 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14),param_1);
        uVar2 = (uint)(iVar1 == 0);
      }
      else {
        uVar2 = (*_DAT_ram_3fcdfee4)(pbVar6,*(undefined1 *)(param_4 + 0x10));
      }
      iVar1 = _DAT_ram_3fcdfecc;
      if (uVar2 != 0) goto LAB_ram_4203af0e;
    }
    iVar1 = _DAT_ram_3fcdfecc;
    if ((param_1 == 4) || (param_2 = *(undefined4 **)(param_3 + 0x10), param_2 == (undefined4 *)0x0)
       ) {
      return;
    }
    pbVar6 = (byte *)*param_2;
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_3 + 3);
    bVar3 = *pbVar6 & 0xf;
    if (bVar3 != 4) {
      pcVar4 = *(code **)(iVar1 + 0x110);
      (*pcVar4)(0x8b5,&DAT_ram_3c0f592c,*pbVar6,0,bVar3,pcVar4);
      iVar1 = _DAT_ram_3fcdfecc;
    }
    *(undefined4 *)(param_4 + 0xc) = 0;
    *(undefined1 *)(param_4 + 8) = 0;
    param_1 = 4;
  } while( true );
}

