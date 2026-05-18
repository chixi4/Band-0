
int FUN_ram_420216f4(undefined4 param_1,undefined *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  undefined4 local_150;
  char local_14c [198];
  char acStack_86 [102];
  
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_ram_3c0c39bc;
  }
  iVar2 = FUN_ram_4204beee("",1,&local_150);
  if (iVar2 == 0) {
    pcVar3 = local_14c;
    (*(code *)&SUB_ram_40010488)(pcVar3,0,0x129);
    cVar4 = '\0';
    pcVar1 = pcVar3;
    do {
      iVar2 = FUN_ram_420213d0(local_150,cVar4,pcVar1,pcVar1 + 0x21);
      if (iVar2 == 0) {
        pcVar1[0x62] = *pcVar1 != '\0';
        iVar2 = FUN_ram_4039c438(pcVar1,param_1);
        if (iVar2 == 0) {
          pcVar1[0x62] = '\0';
        }
      }
      cVar4 = cVar4 + '\x01';
      pcVar1 = pcVar1 + 99;
    } while (cVar4 != '\x03');
    FUN_ram_420215a6(local_150,0);
    FUN_ram_420215a6(local_150,1);
    FUN_ram_420215a6(local_150,2);
    FUN_ram_4204bf00(local_150,&DAT_ram_3c0c42a0);
    FUN_ram_4204bf00(local_150,"ise.");
    iVar2 = FUN_ram_42021464(local_150,0,param_1,param_2);
    if (iVar2 == 0) {
      cVar4 = '\x01';
      do {
        if (pcVar3[0x62] != '\0') {
          iVar2 = FUN_ram_42021464(local_150,cVar4,pcVar3,pcVar3 + 0x21);
          if (iVar2 != 0) goto LAB_ram_42021810;
          cVar4 = cVar4 + '\x01';
        }
      } while ((pcVar3 != acStack_86) && (pcVar3 = pcVar3 + 99, cVar4 != '\x03'));
      iVar2 = FUN_ram_4204c0c8(local_150);
    }
LAB_ram_42021810:
    FUN_ram_4204c3d0(local_150);
  }
  return iVar2;
}

