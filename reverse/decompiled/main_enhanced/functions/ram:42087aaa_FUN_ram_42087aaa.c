
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42087aaa(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(param_2 + 0x26) != 0) {
    FUN_ram_420879c4(0);
    FUN_ram_42091f18(0);
  }
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcf38);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc3060);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc3060);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc3fec);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc3fec);
  DAT_ram_3fcc41a7 = 0;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_2 + 0x304);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_2 + 0x318);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_2 + 0x2cc);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0x54);
  if (((DAT_ram_3fcc41bd - 4 & 0xff) < 10) && ((-0x242 >> (DAT_ram_3fcc41bd - 4 & 0x1f) & 1U) == 0))
  {
    if ((_DAT_ram_3fcc417c != 0) && (*(code **)(_DAT_ram_3fcc417c + 0x10) != (code *)0x0)) {
      (**(code **)(_DAT_ram_3fcc417c + 0x10))();
    }
    _DAT_ram_3fcc4200 = 0;
  }
  if ((_DAT_ram_3fcc4234 != 0) && (*(code **)(_DAT_ram_3fcc4234 + 0x10) != (code *)0x0)) {
    (**(code **)(_DAT_ram_3fcc4234 + 0x10))(&DAT_ram_3c0fab70);
  }
  FUN_ram_4207c6ec(param_2);
  _DAT_ram_3fcc3078 = 2;
  if ((*(byte *)(param_2 + 10) & 2) != 0) {
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xfd;
    FUN_ram_420870d8(param_2,0xfffffff9,1);
    _DAT_ram_3fcc3f7c = param_2;
  }
  FUN_ram_4207a038(1,4,5,
                   "ABWqMgAGmgIPAgAEAskAA90DAmoACYEIDgIABTIAA5MCAwcADwIACAL6AAoCAAOgAQ8CAARK6qqqujAADzIADTSqqqr9AAUCAA9kAAs0qqqqwwIGAgAPkAAEAgIAMaqqqzsHCQIAAhsADwIAAwJKBAkxAQaVAw8CAAIDsAELMgECmgIPAgADAzIAA8QCAQIABBMADwIABAUfAAVmAALbAA8vAAQC7gIEgwAC0wABcAAPMgAUBaMFD1sKAwQCAAWhBgoyAAR4AA8CAAAPMgABARkHH/4tAAABAgAIggAESwMBfQcNyggEAgAKMgAC8gABBgcU6iIADAIADzIAAV3/qqqqv/wIBAIADzIAAgGcAQQiAAwCAANmBgECAASWAAKTBAETAA8CAAAFJgABjQARqwgADzIAIAFjAwI9AA4CAAVYAAEcBgNkAAGYAgETAA8CAAAKMgAEIQES6sEEDwIAAg8yAAMBkgEPMAACDzIABQHQCg8yAAYBpQUBAgAFBQkBKwQBEwAPAgAACDIABpYCH6rIAAoGZAAFMgAPXgEMCTIAAg0AAVsED5EAAAMACQIlAAkNAAEhBAIUAA0CAAUZBAMyAAHDAQGVAA8sAQUPMgACAbsCDzIAEgOcCQFjAA8gAwYJZAAS/1oAAvgAD4QDBgj6ABH/cgUBYwAP6AMICTIAAfUBAcYAAUwEcv1VVVVX1X8XAVL//1VVW1gCNK///xYAQeqqqq+UAAIQEA0yABJVWgcHMgAh5WqKAQLPAA8yAAERX7sAFqtkABTVMgAC1gFU/qqVaquAAG///1WqlVsyAAYERQUl1X9OAG///1X/9VcyAAUUq+0A8RTVf//VflW//+VW////Vf/5V/+VW6qqlVb/1X/5W/5Vb/1VVcUABjQI9RHVf//VdVVv/1VVf///Vf/9V/1VVWqpVVV/1X/lX/VVVjIABGMAkf/Vf//VVVVb/fQA8wVV//1X9VVVWqVVVV/Vf5V/1VVV+WQAAvgAAJQRstV//9VW5Vf1W/lXlgDyAtVb5VqlVuVb1X9V/1V/lWqVLAECLgAEMgBhX/lX9V/9MgD0AfVX1X/1VpVa/VfVfVb/Vf8yAAQpAQOWAHJ//Vflb/5WXgHxAZV//VaVar1X1WVb/laqpVpkAAaUAAKWAPENf/1X5VVVVv//VVVVb5W//VaVaqqq1VVv6VVVVTIABVoBBzIAFNUyACO/VTIAT5VVWqkyABEkW/9kADWVVVYyAAl8AwH0AUL9V+Vv9AEZ/zIAQVaqqqrIAAKQAAICAAYyABOrMgDBf/lWlVqpVpVpVapVMgAGrQUBAgADMgAx9V/+XgHxBf//1W/1WpVapVaValVqVaqVapVvVAMBLQABAgADMgAz+ValMgBR5VZVXqUkAYWValVVVWqVWhcFAgIAAzIABCYCcv//+VVVf6kyAHFalVVVquVV/QcCLgAHXgEi/5WKAvwE///+VVX/6lVVqpVqpValVVb/9TIABAIAFf6mAWL6r///6VrjAlWVv///qgAJDwIACgIMBAJGAA8yABMy////PAQCXAQJwwEPAgAQBHoEDwIAFwuRAQ8CABABoBEPKAAQBgIACZEBVoAAAAC/HAACAgAb+BMAAY4JAhsAAjIAFAsNAAQCAAwyAAn8B1SAAAAAAioABAIACDIAIfQA8wQGawEvgACXAAAPMgALVAKqQAA/XQADAgANMgAILQFjgAf/9AAvKgAEAgAPMgABBfsAwoAH//0AH////r///nQBEfoyAAGoCiP6v8gACMUI8hWAB///AA/QA9Af/4AAL//4AP4AB//4AL4AB////QABv/0AAAAtAQSEAQQyAPIJAB/4AAAC//gA8AAA//gAsAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP..." /* TRUNCATED STRING LITERAL */
                   ,*(undefined1 *)(param_2 + 0x33c));
  if (*(char *)(_DAT_ram_3fcc4014 + 0x128) != '\x06') {
    if (*(char *)(param_2 + 0x33c) != '\0') {
      *(char *)(param_2 + 0x33c) = *(char *)(param_2 + 0x33c) + -1;
      (**(code **)(_DAT_ram_3fcc4178 + 100))();
      FUN_ram_42086360(param_2 + 4);
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffffe;
      goto LAB_ram_42087c60;
    }
  }
  FUN_ram_42086996(param_2);
LAB_ram_42087c60:
  _DAT_ram_3fcc3f78 = 0;
  if ((*(char *)(_DAT_ram_3fcc4014 + 0x128) != '\x06') || (_DAT_ram_3fcc41c4 == 0)) {
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcf48,*(char *)(_DAT_ram_3fcc4014 + 0x128),0);
    *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 0;
    thunk_FUN_ram_42094f92(0,_DAT_ram_3fcc418c);
    if (_DAT_ram_3fcc4148 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcc4148 = 0;
    }
    if (_DAT_ram_3fcc4138 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcc4138 = 0;
    }
    if (_DAT_ram_3fcc413c != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcc413c = 0;
    }
  }
  DAT_ram_3fcdfad4 = 0;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  iVar2 = _DAT_ram_3fcdfdd8;
  uVar1 = _DAT_ram_3fcdfdb4;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  (**(code **)(iVar2 + 0x58))(uVar1);
  FUN_ram_4208b786();
  FUN_ram_4207c908(0);
  DAT_ram_3fcc305d = 0;
  FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fcf60,8);
  FUN_ram_4207f554(8);
  return;
}

