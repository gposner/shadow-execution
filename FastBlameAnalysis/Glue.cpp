#include "Glue.h"
#include "BlameAnalysis.h"

void llvm_fadd(IID iidf, double, IID l, double lo, IID r, double ro) {
	BlameAnalysis::get().fadd(iidf, l, r, lo, ro);
}

void llvm_fsub(IID iidf, double, IID l, double lo, IID r, double ro) {
	BlameAnalysis::get().fsub(iidf, l, r, lo, ro);
}

void llvm_fmul(IID iidf, double, IID l, double lo, IID r, double ro) {
	BlameAnalysis::get().fmul(iidf, l, r, lo, ro);
}

void llvm_fdiv(IID iidf, double, IID l, double lo, IID r, double ro) {
	BlameAnalysis::get().fdiv(iidf, l, r, lo, ro);
}

void llvm_frem(IID, double, IID, double, IID, double) {
	// TODO: We did not implement frem - this may be necessary
	//	BlameAnalysis::get().frem(iidf, l, r, lo, ro);
}

void llvm_fload(IID iidf, double value, IID input, void*) {
	BlameAnalysis::get().load(iidf, input, value);
}

void llvm_fstore(IID iidV, double value, IID ptr, void*) {
	BlameAnalysis::get().store(iidV, ptr, value);
}

// ***** Other Operations ***** //
void llvm_call_fabs(IID iidf, double, IID operand, double operandValue) {
	BlameAnalysis::get().call_fabs(iidf, operand, operandValue);
}

void llvm_call_exp(IID iidf, double, IID operand, double operandValue) {
	BlameAnalysis::get().call_exp(iidf, operand, operandValue);
}
void llvm_call_sqrt(IID iidf, double, IID operand, double operandValue) {
	BlameAnalysis::get().call_sqrt(iidf, operand, operandValue);
}
void llvm_call_log(IID iidf, double, IID operand, double operandValue) {
	BlameAnalysis::get().call_log(iidf, operand, operandValue);
}
void llvm_call_sin(IID iidf, double, IID operand, double operandValue) {
	BlameAnalysis::get().call_sin(iidf, operand, operandValue);
}
void llvm_call_acos(IID iidf, double, IID operand, double operandValue) {
	BlameAnalysis::get().call_acos(iidf, operand, operandValue);
}
void llvm_call_cos(IID iidf, double, IID operand, double operandValue) {
	BlameAnalysis::get().call_cos(iidf, operand, operandValue);
}
void llvm_call_floor(IID iidf, double, IID operand, double operandValue) {
	BlameAnalysis::get().call_floor(iidf, operand, operandValue);
}
