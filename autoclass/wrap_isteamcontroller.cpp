#include <steam_api_.h>

bool  ISteamController_::Init()
{
  TRACE("((ISteamController *)%p)\n", this);
  auto result = this->internal->Init();
  TRACE("() = (bool )%d\n", result);

  return result;
}


bool  ISteamController_::Shutdown()
{
  TRACE("((ISteamController *)%p)\n", this);
  auto result = this->internal->Shutdown();
  TRACE("() = (bool )%d\n", result);

  return result;
}


void  ISteamController_::RunFrame()
{
  TRACE("((ISteamController *)%p)\n", this);
  this->internal->RunFrame();
  
}


int  ISteamController_::GetConnectedControllers(ControllerHandle_t * handlesOut)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t *)%p)\n", this, handlesOut);
  auto result = this->internal->GetConnectedControllers(handlesOut);
  TRACE("() = (int )%d\n", result);

  return result;
}


bool  ISteamController_::ShowBindingPanel(ControllerHandle_t  controllerHandle)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p)\n", this, controllerHandle);
  auto result = this->internal->ShowBindingPanel(controllerHandle);
  TRACE("() = (bool )%d\n", result);

  return result;
}


ControllerActionSetHandle_t  ISteamController_::GetActionSetHandle(char * pszActionSetName)
{
  TRACE("((ISteamController *)%p, (char *)\"%s\")\n", this, pszActionSetName);
  auto result = this->internal->GetActionSetHandle(pszActionSetName);
  TRACE("() = (ControllerActionSetHandle_t )%p\n", result);

  return result;
}


void  ISteamController_::ActivateActionSet(ControllerHandle_t  controllerHandle, ControllerActionSetHandle_t  actionSetHandle)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ControllerActionSetHandle_t )%p)\n", this, controllerHandle, actionSetHandle);
  this->internal->ActivateActionSet(controllerHandle, actionSetHandle);
  
}


ControllerActionSetHandle_t  ISteamController_::GetCurrentActionSet(ControllerHandle_t  controllerHandle)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p)\n", this, controllerHandle);
  auto result = this->internal->GetCurrentActionSet(controllerHandle);
  TRACE("() = (ControllerActionSetHandle_t )%p\n", result);

  return result;
}


ControllerDigitalActionHandle_t  ISteamController_::GetDigitalActionHandle(char * pszActionName)
{
  TRACE("((ISteamController *)%p, (char *)\"%s\")\n", this, pszActionName);
  auto result = this->internal->GetDigitalActionHandle(pszActionName);
  TRACE("() = (ControllerDigitalActionHandle_t )%p\n", result);

  return result;
}


ControllerDigitalActionData_t  ISteamController_::GetDigitalActionData(ControllerHandle_t  controllerHandle, ControllerDigitalActionHandle_t  digitalActionHandle)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ControllerDigitalActionHandle_t )%p)\n", this, controllerHandle, digitalActionHandle);
  auto result = this->internal->GetDigitalActionData(controllerHandle, digitalActionHandle);
  TRACE("() = (ControllerDigitalActionData_t )%p\n", result);

  return result;
}


int  ISteamController_::GetDigitalActionOrigins(ControllerHandle_t  controllerHandle, ControllerActionSetHandle_t  actionSetHandle, ControllerDigitalActionHandle_t  digitalActionHandle, EControllerActionOrigin * originsOut)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ControllerActionSetHandle_t )%p, (ControllerDigitalActionHandle_t )%p, (EControllerActionOrigin *)%p)\n", this, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
  auto result = this->internal->GetDigitalActionOrigins(controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
  TRACE("() = (int )%d\n", result);

  return result;
}


ControllerAnalogActionHandle_t  ISteamController_::GetAnalogActionHandle(char * pszActionName)
{
  TRACE("((ISteamController *)%p, (char *)\"%s\")\n", this, pszActionName);
  auto result = this->internal->GetAnalogActionHandle(pszActionName);
  TRACE("() = (ControllerAnalogActionHandle_t )%p\n", result);

  return result;
}


ControllerAnalogActionData_t  ISteamController_::GetAnalogActionData(ControllerHandle_t  controllerHandle, ControllerAnalogActionHandle_t  analogActionHandle)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ControllerAnalogActionHandle_t )%p)\n", this, controllerHandle, analogActionHandle);
  auto result = this->internal->GetAnalogActionData(controllerHandle, analogActionHandle);
  TRACE("() = (ControllerAnalogActionData_t )%p\n", result);

  return result;
}


int  ISteamController_::GetAnalogActionOrigins(ControllerHandle_t  controllerHandle, ControllerActionSetHandle_t  actionSetHandle, ControllerAnalogActionHandle_t  analogActionHandle, EControllerActionOrigin * originsOut)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ControllerActionSetHandle_t )%p, (ControllerAnalogActionHandle_t )%p, (EControllerActionOrigin *)%p)\n", this, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
  auto result = this->internal->GetAnalogActionOrigins(controllerHandle, actionSetHandle, analogActionHandle, originsOut);
  TRACE("() = (int )%d\n", result);

  return result;
}


void  ISteamController_::StopAnalogActionMomentum(ControllerHandle_t  controllerHandle, ControllerAnalogActionHandle_t  eAction)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ControllerAnalogActionHandle_t )%p)\n", this, controllerHandle, eAction);
  this->internal->StopAnalogActionMomentum(controllerHandle, eAction);
  
}


void  ISteamController_::TriggerHapticPulse(ControllerHandle_t  controllerHandle, ESteamControllerPad  eTargetPad, unsigned short  usDurationMicroSec)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ESteamControllerPad )%p, (unsigned short )%p)\n", this, controllerHandle, eTargetPad, usDurationMicroSec);
  this->internal->TriggerHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec);
  
}


void  ISteamController_::TriggerRepeatedHapticPulse(ControllerHandle_t  controllerHandle, ESteamControllerPad  eTargetPad, unsigned short  usDurationMicroSec, unsigned short  usOffMicroSec, unsigned short  unRepeat, int  nFlags)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ESteamControllerPad )%p, (unsigned short )%p, (unsigned short )%p, (unsigned short )%p, (int )%d)\n", this, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
  this->internal->TriggerRepeatedHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
  
}


void  ISteamController_::TriggerVibration(ControllerHandle_t  controllerHandle, unsigned short  usLeftSpeed, unsigned short  usRightSpeed)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (unsigned short )%p, (unsigned short )%p)\n", this, controllerHandle, usLeftSpeed, usRightSpeed);
  this->internal->TriggerVibration(controllerHandle, usLeftSpeed, usRightSpeed);
  
}


void  ISteamController_::SetLEDColor(ControllerHandle_t  controllerHandle, uint8  nColorR, uint8  nColorG, uint8  nColorB, int  nFlags)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (uint8 )%p, (uint8 )%p, (uint8 )%p, (int )%d)\n", this, controllerHandle, nColorR, nColorG, nColorB, nFlags);
  this->internal->SetLEDColor(controllerHandle, nColorR, nColorG, nColorB, nFlags);
  
}


int  ISteamController_::GetGamepadIndexForController(ControllerHandle_t  ulControllerHandle)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p)\n", this, ulControllerHandle);
  auto result = this->internal->GetGamepadIndexForController(ulControllerHandle);
  TRACE("() = (int )%d\n", result);

  return result;
}


ControllerHandle_t  ISteamController_::GetControllerForGamepadIndex(int  nIndex)
{
  TRACE("((ISteamController *)%p, (int )%d)\n", this, nIndex);
  auto result = this->internal->GetControllerForGamepadIndex(nIndex);
  TRACE("() = (ControllerHandle_t )%p\n", result);

  return result;
}


ControllerMotionData_t  ISteamController_::GetMotionData(ControllerHandle_t  controllerHandle)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p)\n", this, controllerHandle);
  auto result = this->internal->GetMotionData(controllerHandle);
  TRACE("() = (ControllerMotionData_t )%p\n", result);

  return result;
}


bool  ISteamController_::ShowDigitalActionOrigins(ControllerHandle_t  controllerHandle, ControllerDigitalActionHandle_t  digitalActionHandle, float  flScale, float  flXPosition, float  flYPosition)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ControllerDigitalActionHandle_t )%p, (float )%f, (float )%f, (float )%f)\n", this, controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
  auto result = this->internal->ShowDigitalActionOrigins(controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
  TRACE("() = (bool )%d\n", result);

  return result;
}


bool  ISteamController_::ShowAnalogActionOrigins(ControllerHandle_t  controllerHandle, ControllerAnalogActionHandle_t  analogActionHandle, float  flScale, float  flXPosition, float  flYPosition)
{
  TRACE("((ISteamController *)%p, (ControllerHandle_t )%p, (ControllerAnalogActionHandle_t )%p, (float )%f, (float )%f, (float )%f)\n", this, controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
  auto result = this->internal->ShowAnalogActionOrigins(controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
  TRACE("() = (bool )%d\n", result);

  return result;
}


char * ISteamController_::GetStringForActionOrigin(EControllerActionOrigin  eOrigin)
{
  TRACE("((ISteamController *)%p, (EControllerActionOrigin )%p)\n", this, eOrigin);
  auto result = this->internal->GetStringForActionOrigin(eOrigin);
  TRACE("() = (char *)\"%s\"\n", result);

  return result;
}


char * ISteamController_::GetGlyphForActionOrigin(EControllerActionOrigin  eOrigin)
{
  TRACE("((ISteamController *)%p, (EControllerActionOrigin )%p)\n", this, eOrigin);
  auto result = this->internal->GetGlyphForActionOrigin(eOrigin);
  TRACE("() = (char *)\"%s\"\n", result);

  return result;
}
ISteamController_::ISteamController_(ISteamController * towrap)
{
  this->internal = towrap;
}

ISteamController_::~ISteamController_()
{
  delete this->internal;
}
