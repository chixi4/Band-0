
undefined4 FUN_ram_4202c3f2(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\x0e') {
    uVar2 = 0xc;
    if ((byte)param_1[1] < 4) goto LAB_ram_4202c434;
    pcVar3 = "l";
    do {
      if (*pcVar3 == param_1[3]) goto LAB_ram_4202c464;
      pcVar3 = pcVar3 + 8;
    } while (pcVar3 != "z");
  }
  else {
    pcVar3 = "l";
    do {
      if (*pcVar3 == cVar1) goto LAB_ram_4202c464;
      pcVar3 = pcVar3 + 8;
    } while (pcVar3 != "z");
  }
  uVar2 = 8;
  goto LAB_ram_4202c434;
LAB_ram_4202c464:
  uVar2 = (**(code **)(pcVar3 + 4))
                    (cVar1,param_1 + 2,param_1[1],&DAT_ram_3c0f53e8,pcVar3,*(code **)(pcVar3 + 4));
LAB_ram_4202c434:
  thunk_EXT_FUN_ram_40010ae8(param_1);
  return uVar2;
}

