/****************************************************************************/
// Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.dev/sumo
// Copyright (C) 2013-2023 German Aerospace Center (DLR) and others.
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License 2.0 which is available at
// https://www.eclipse.org/legal/epl-2.0/
// This Source Code may also be made available under the following Secondary
// Licenses when the conditions for such availability set forth in the Eclipse
// Public License 2.0 are satisfied: GNU General Public License, version 2
// or later which is available at
// https://www.gnu.org/licenses/old-licenses/gpl-2.0-standalone.html
// SPDX-License-Identifier: EPL-2.0 OR GPL-2.0-or-later
/****************************************************************************/
/// @file    MSSOTLPolicy3DStimulus.cpp
/// @author  Riccardo Belletti
/// @date    Mar 2014
///
// The class for Swarm-based low-level policy
/****************************************************************************/

#include "MSSOTLPolicy3DStimulus.h"

MSSOTLPolicy3DStimulus::MSSOTLPolicy3DStimulus(std::string keyPrefix,
        const Parameterised::Map& parameters) :
    MSSOTLPolicy5DStimulus(keyPrefix, parameters) {

    setStimCoxExpDispersionInDefVal(0);
    setStimCoxExpDispersionOutDefVal(0);
}
