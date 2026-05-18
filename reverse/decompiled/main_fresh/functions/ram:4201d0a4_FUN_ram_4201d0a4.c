
void FUN_ram_4201d0a4(undefined2 param_1,char *param_2,undefined1 param_3,int param_4,
                     undefined2 param_5)

{
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uStack_24 = (undefined2)(200 - param_4 >> 1);
    uStack_1b = 0xff;
    uStack_20 = (undefined2)param_4;
    uStack_18 = 1;
    uStack_14 = 0x201;
    uStack_12 = 1;
    uStack_22 = param_1;
    uStack_1e = param_5;
    uStack_1c = param_3;
    FUN_ram_4201f3b0(param_2,&uStack_24);
    return;
  }
  return;
}

