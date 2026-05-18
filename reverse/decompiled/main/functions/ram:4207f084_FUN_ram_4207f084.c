
void FUN_ram_4207f084(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(gp + -0xb4);
  if (param_2 == 0) {
    *(bool *)(param_1 + 1) = *(char *)(iVar2 + 0x361) != '\0';
    cVar1 = *(char *)(iVar2 + 0x360);
  }
  else {
    *(bool *)(param_1 + 1) = *(char *)(iVar2 + 0x3fe) != '\0';
    cVar1 = *(char *)(iVar2 + 0x3fd);
  }
  *(bool *)param_1 = cVar1 != '\0';
  return;
}

