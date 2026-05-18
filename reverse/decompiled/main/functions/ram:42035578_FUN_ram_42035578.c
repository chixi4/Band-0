
void FUN_ram_42035578(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 local_40;
  undefined1 auStack_3c [36];
  
  (*(code *)&SUB_ram_40010488)(auStack_3c,0,0x1c);
  cVar1 = *param_3;
  local_40 = 3;
  FUN_ram_4203554e(param_1,param_2,param_2,param_3);
  FUN_ram_420353c8(param_1,param_1,&local_40,param_3 + 4,(int)cVar1);
  FUN_ram_4203554e(param_1,param_1,param_2,param_3);
  FUN_ram_4203537e(param_1,param_1,param_3 + 0x84,param_3 + 4,(int)cVar1);
  return;
}

