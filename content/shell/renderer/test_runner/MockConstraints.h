// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_SHELL_RENDERER_TEST_RUNNER_MOCKCONSTRAINTS_H_
#define CONTENT_SHELL_RENDERER_TEST_RUNNER_MOCKCONSTRAINTS_H_

namespace blink {
class WebMediaConstraints;
class WebString;
}

namespace WebTestRunner {

class MockConstraints {
public:
    static bool verifyConstraints(const blink::WebMediaConstraints&, blink::WebString* failedConstraint = 0);
};

}

#endif  // CONTENT_SHELL_RENDERER_TEST_RUNNER_MOCKCONSTRAINTS_H_
