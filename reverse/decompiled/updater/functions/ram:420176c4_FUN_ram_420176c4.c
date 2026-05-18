
void FUN_ram_420176c4(char *param_1)

{
  FUN_ram_42017410(1);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_ram_42017672(8,param_1,0);
  }
  FUN_ram_42017480(0x14,0x22,0xa0,2,0);
  FUN_ram_42017672(0xae,0x3c071198,0);
  return;
}

