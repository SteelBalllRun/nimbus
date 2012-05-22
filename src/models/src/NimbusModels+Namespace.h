//
// Copyright 2011 Jeff Verkoeyen
// This file has been automatically generated by Nimbus' namespacing script.
//
// Licensed under the Apache License, Version 2.0 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef __NIMBUS_NAMESPACE_PREFIX_
#error You must define __NIMBUS_NAMESPACE_PREFIX_ in your project settings in order to use a Nimbus namespace.
#else

#ifndef __NIMBUS_NS_SYMBOL
// We need to have multiple levels of macros here so that __NIMBUS_NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NIMBUS_NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NIMBUS_NS_BRIDGE(ns, symbol) __NIMBUS_NS_REWRITE(ns, symbol)
#define __NIMBUS_NS_SYMBOL(symbol) __NIMBUS_NS_BRIDGE(__NIMBUS_NAMESPACE_PREFIX_, symbol)
#endif

// Classes
#ifndef NICellFactory
#define NICellFactory __NIMBUS_NS_SYMBOL(NICellFactory)
#endif
#ifndef NICellObject
#define NICellObject __NIMBUS_NS_SYMBOL(NICellObject)
#endif
#ifndef NIFormElement
#define NIFormElement __NIMBUS_NS_SYMBOL(NIFormElement)
#endif
#ifndef NIFormElementCell
#define NIFormElementCell __NIMBUS_NS_SYMBOL(NIFormElementCell)
#endif
#ifndef NIRadioGroup
#define NIRadioGroup __NIMBUS_NS_SYMBOL(NIRadioGroup)
#endif
#ifndef NISubtitleCellObject
#define NISubtitleCellObject __NIMBUS_NS_SYMBOL(NISubtitleCellObject)
#endif
#ifndef NISwitchFormElement
#define NISwitchFormElement __NIMBUS_NS_SYMBOL(NISwitchFormElement)
#endif
#ifndef NISwitchFormElementCell
#define NISwitchFormElementCell __NIMBUS_NS_SYMBOL(NISwitchFormElementCell)
#endif
#ifndef NITableViewAction
#define NITableViewAction __NIMBUS_NS_SYMBOL(NITableViewAction)
#endif
#ifndef NITableViewActions
#define NITableViewActions __NIMBUS_NS_SYMBOL(NITableViewActions)
#endif
#ifndef NITableViewModel
#define NITableViewModel __NIMBUS_NS_SYMBOL(NITableViewModel)
#endif
#ifndef NITableViewModelFooter
#define NITableViewModelFooter __NIMBUS_NS_SYMBOL(NITableViewModelFooter)
#endif
#ifndef NITableViewModelSection
#define NITableViewModelSection __NIMBUS_NS_SYMBOL(NITableViewModelSection)
#endif
#ifndef NITextCell
#define NITextCell __NIMBUS_NS_SYMBOL(NITextCell)
#endif
#ifndef NITextInputFormElement
#define NITextInputFormElement __NIMBUS_NS_SYMBOL(NITextInputFormElement)
#endif
#ifndef NITextInputFormElementCell
#define NITextInputFormElementCell __NIMBUS_NS_SYMBOL(NITextInputFormElementCell)
#endif
#ifndef NITitleCellObject
#define NITitleCellObject __NIMBUS_NS_SYMBOL(NITitleCellObject)
#endif
// Functions
#ifndef NIPushControllerAction
#define NIPushControllerAction __NIMBUS_NS_SYMBOL(NIPushControllerAction)
#endif
// Externs
#endif
