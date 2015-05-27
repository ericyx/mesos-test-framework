/**
* Licensed to the Apache Software Foundation (ASF) under one
* or more contributor license agreements.  See the NOTICE file
* distributed with this work for additional information
* regarding copyright ownership.  The ASF licenses this file
* to you under the Apache License, Version 2.0 (the
* "License"); you may not use this file except in compliance
* with the License.  You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <libgen.h>

#include <iostream>
#include <string>

#include <boost/lexical_cast.hpp>

#include <mesos/resources.hpp>
#include <mesos/scheduler.hpp>
#include <mesos/type_utils.hpp>

#include <stout/check.hpp>
#include <stout/exit.hpp>
#include <stout/flags.hpp>
#include <stout/numify.hpp>
#include <stout/os.hpp>
#include <stout/stringify.hpp>

#include <logging/flags.hpp>
#include <logging/logging.hpp>

using namespace mesos;

using boost::lexical_cast;

using std::cerr;
using std::cout;
using std::endl;
using std::flush;
using std::string;
using std::vector;

using mesos::Resources;

const int32_t CPUS_PER_TASK = 1;
const int32_t MEM_PER_TASK = 128;

int testFramework(int argc, char** argv);
