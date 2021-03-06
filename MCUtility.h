//
//  Utility.h
//  MoodChanger
//
//  Created by Austin Feight on 2/6/14.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface MCUtility : NSObject

+ (void)displayErrorOnMainQueue:(NSError *)error withMessage:(NSString *)message;
+ (int)exifOrientation:(BOOL)isUsingFrontFacingCamera;

+ (AVCaptureDevice *)frontCamera;

@end
