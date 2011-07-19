//
// Copyright 2009-2011 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
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
#import <UIKit/UIKit.h>

#import "extThree20CSSStyle/TTCSSRuleSet.h"
#import "extThree20CSSStyle/TTCSSApplyProtocol.h"

@interface UIView(TTCSSAdditions) <TTCSSApplyProtocol>

<<<<<<< HEAD:src/extThree20CSSStyle/Headers/UIView+CSSAdditions.h
/**
 * Convenient Init method to create an UIView and apply
 * an CSS Rule Set on one pass.
 */
-(id)initWithFrame:(CGRect)anFrame andApplyCssFromSelector:(NSString*)anSelector;
=======
@interface TTDefaultCSSStyleSheet : TTDefaultStyleSheet {
@private
  TTCSSStyleSheet* _styleSheet;
}

@property (nonatomic, readonly) TTCSSStyleSheet* styleSheet;

- (BOOL)addStyleSheetFromDisk:(NSString*)filename;

+ (TTDefaultCSSStyleSheet*)globalCSSStyleSheet;
>>>>>>> 300db176390f97e990cb772da3e8502e8f514ba3:src/extThree20CSSStyle/Sources/TTDefaultCSSStyleSheet.h

@end
