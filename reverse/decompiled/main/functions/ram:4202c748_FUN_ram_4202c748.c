
int FUN_ram_4202c748(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char cStack_29;
  int iStack_28;
  undefined4 auStack_24 [4];
  
  iVar2 = 3;
  if ((param_2 != (int *)0x0) && (iVar2 = 3, *param_2 != 0)) {
    iVar4 = FUN_ram_4203069a();
    iVar2 = 7;
    if (iVar4 != 0xffff) {
      sVar1 = *(short *)(param_1 + 8);
      iVar5 = (*(code *)&SUB_ram_400119f4)(*param_2,0,1,&cStack_29);
      iVar2 = 4;
      if (iVar5 == 0) {
        if ((sVar1 == 4) && (iVar2 = FUN_ram_4202c724(cStack_29), iVar2 != 0)) {
          thunk_FUN_ram_4202b7dc();
          iVar2 = FUN_ram_4203158a(iVar4,4,&iStack_28,auStack_24);
          if (iVar2 == 0) {
            *(undefined1 *)(iStack_28 + 0x84) = 0;
            FUN_ram_4202d64e(iStack_28,auStack_24[0],0);
          }
          thunk_FUN_ram_4202b7f6();
        }
        pcVar3 = "z";
        do {
          if (*pcVar3 == cStack_29) {
            (*(code *)&SUB_ram_400119dc)(*param_2,1);
            iVar2 = (**(code **)(pcVar3 + 4))(iVar4,sVar1,param_2);
            if (iVar2 == 0) {
              return 0;
            }
            if (iVar2 != 8) {
              return iVar2;
            }
            FUN_ram_4202c5d6(cStack_29,iVar4,sVar1,param_2);
            return 8;
          }
          pcVar3 = pcVar3 + 8;
        } while (pcVar3 != "$Nx");
        FUN_ram_4202c5d6(cStack_29,iVar4,sVar1,param_2);
        iVar2 = 8;
      }
    }
  }
  return iVar2;
}

